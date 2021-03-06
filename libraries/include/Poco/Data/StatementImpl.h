//
// StatementImpl.h
//
// $Id: //poco/1.3/Data/include/Poco/Data/StatementImpl.h#2 $
//
// Library: Data
// Package: DataCore
// Module:  StatementImpl
//
// Definition of the StatementImpl class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef Data_StatementImpl_INCLUDED
#define Data_StatementImpl_INCLUDED


#include "Poco/Data/Data.h"
#include "Poco/Data/AbstractBinding.h"
#include "Poco/Data/AbstractExtraction.h"
#include "Poco/Data/Range.h"
#include "Poco/Data/Column.h"
#include "Poco/Data/Extraction.h"
#include "Poco/RefCountedObject.h"
#include "Poco/AutoPtr.h"
#include "Poco/String.h"
#include "Poco/Format.h"
#include "Poco/Exception.h"
#include <vector>
#include <sstream>


namespace Poco {
namespace Data {


class Data_API StatementImpl: public Poco::RefCountedObject
	/// StatementImpl interface that subclasses must implement to define database dependent query execution.
	///
	/// StatementImpl's are noncopyable.
{
public:
	enum State
	{
		ST_INITIALIZED,
		ST_COMPILED,
		ST_BOUND,
		ST_DONE,
		ST_RESET
	};

	StatementImpl();
		/// Creates the StatementImpl.

	virtual ~StatementImpl();
		/// Destroys the StatementImpl.

	template <typename T> void add(const T& t)
		/// Appends SQl statement (fragments).
	{
		_ostr << t;
	}

	void addBinding(AbstractBinding* info);
		/// Registers the Binding at the StatementImpl.

	void addExtract(AbstractExtraction* info);
		/// Registers objects used for extracting data at the StatementImpl.

	void setExtractionLimit(const Limit& extrLimit);
		/// Changes the extractionLimit to extrLimit. Per default no limit (EXTRACT_UNLIMITED) is set.

	std::string toString() const;
		/// Create a string version of the SQL statement.

	Poco::UInt32 execute();
		/// Executes a statement. Returns the number of rows extracted.

	void reset();
		/// Resets the statement, so that we can reuse all bindings and re-execute again.

	State getState() const;
		/// Returns the state of the Statement.

protected:
	virtual Poco::UInt32 columnsReturned() const = 0;
		/// Returns number of columns returned by query. 

	virtual const MetaColumn& metaColumn(Poco::UInt32 pos) const = 0;
		/// Returns column meta data.

	const MetaColumn& metaColumn(const std::string& name) const;
		/// Returns column meta data.

	virtual bool hasNext() = 0;
		/// Returns true if a call to next() will return data. 
		///
		/// Note that the implementation must support
		/// several consecutive calls to hasNext without data getting lost, 
		/// ie. hasNext(); hasNext(); next() must be equal to hasNext(); next();

	virtual void next() = 0;
		/// Retrieves the next row from the resultset.
		///
		/// Will throw, if the resultset is empty.
		/// Expects the statement to be compiled and bound

	virtual bool canBind() const = 0;
		/// Returns if another bind is possible.

	virtual void compileImpl() = 0;
		/// Compiles the statement, doesn't bind yet.

	virtual void bindImpl() = 0;
		/// Binds parameters.

	virtual AbstractExtractor& extractor() = 0;
		/// Returns the concrete extractor used by the statement.

	const AbstractExtractionVec& extractions() const;
		/// Returns the extractions vector.

	virtual AbstractBinder& binder() = 0;
		/// Returns the concrete binder used by the statement.

	int columnsExtracted() const;
		/// Returns the number of columns that the extractors handle.

	const AbstractBindingVec& bindings() const;
		/// Returns the bindings.

	AbstractBindingVec& bindings();
		/// Returns the bindings.

	AbstractExtractionVec& extractions();
		/// Returns the extractions vector.

	void makeExtractors(Poco::UInt32 count);
		/// Creates extraction vector. Used in case when there is
		/// data returned, but no extraction supplied externally.

private:
	void compile();
		/// Compiles the statement, if not yet compiled. doesn't bind yet

	void bind();
		/// Binds the statement, if not yet bound.

	Poco::UInt32 executeWithLimit();
		/// Executes with an upper limit set.

	Poco::UInt32 executeWithoutLimit();
		/// Executes without an upper limit set.

	void fixupExtraction();
		/// Sets the AbstractExtractor at the extractors.

	void fixupBinding();
		/// Sets the AbstractBinder at the bindings

	void resetBinding();
		/// Resets binding so we can reuse it again.

	void resetExtraction();
		/// Resets binding so we can reuse it again.

	template <class T, class C>
	void addInternalExtract(const MetaColumn& mc)
		/// Utility function to create and add an internal extraction.
	{
		std::vector<T>* pData = new C;
		Column<T>* pCol = new Column<T>(mc, pData);
		addExtract(new InternalExtraction<T>(*pData, pCol));
	}

	StatementImpl(const StatementImpl& stmt);
	StatementImpl& operator = (const StatementImpl& stmt);

	State                 _state;
	Limit                 _extrLimit;
	Poco::UInt32          _lowerLimit;
	int                   _columnsExtracted;
	std::ostringstream    _ostr;
	AbstractBindingVec    _bindings;
	AbstractExtractionVec _extractors;

	friend class Statement; 
};


//
// inlines
//
inline void StatementImpl::addBinding(AbstractBinding* info)
{
	_bindings.push_back(info);
}


inline void StatementImpl::addExtract(AbstractExtraction* info)
{
	_extractors.push_back(info);
}


inline std::string StatementImpl::toString() const
{
	return _ostr.str();
}


inline const AbstractBindingVec& StatementImpl::bindings() const
{
	return _bindings;
}


inline AbstractBindingVec& StatementImpl::bindings()
{
	return _bindings;
}


inline const AbstractExtractionVec& StatementImpl::extractions() const
{
	return _extractors;
}


inline AbstractExtractionVec& StatementImpl::extractions()
{
	return _extractors;
}


inline int StatementImpl::columnsExtracted() const
{
	return _columnsExtracted;
}


inline StatementImpl::State StatementImpl::getState() const
{
	return _state;
}


} } // namespace Poco::Data


#endif // Data_StatementImpl_INCLUDED
