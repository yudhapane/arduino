//
// ConnectionHandle.h
//
// $Id: //poco/1.3/Data/ODBC/include/Poco/Data/ODBC/ConnectionHandle.h#3 $
//
// Library: Data/ODBC
// Package: ODBC
// Module:  ConnectionHandle
//
// Definition of ConnectionHandle.
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


#ifndef ODBC_ConnectionHandle_INCLUDED
#define ODBC_ConnectionHandle_INCLUDED


#include "Poco/Data/ODBC/ODBC.h"
#include "Poco/Data/ODBC/EnvironmentHandle.h"
#ifdef POCO_OS_FAMILY_WINDOWS
#include <windows.h>
#endif
#include <sqltypes.h>


namespace Poco {
namespace Data {
namespace ODBC {


class ODBC_API ConnectionHandle
/// ODBC connection handle class
{
public:
	ConnectionHandle(EnvironmentHandle* pEnvironment = 0);
		/// Creates the ConnectionHandle.

	~ConnectionHandle();
		/// Creates the ConnectionHandle.

	operator const SQLHDBC& () const;
		/// Const conversion operator into reference to native type.

	const SQLHDBC& handle() const;
		/// Returns const reference to handle;

private:
	operator SQLHDBC& ();
		/// Conversion operator into reference to native type.

	SQLHDBC& handle();
		/// Returns reference to handle;

	ConnectionHandle(const ConnectionHandle&);
	const ConnectionHandle& operator=(const ConnectionHandle&);

	const EnvironmentHandle* _pEnvironment;
	SQLHDBC _hdbc;
	bool _ownsEnvironment;
};


//
// inlines
//
inline ConnectionHandle::operator const SQLHDBC& () const
{
	return handle();
}


inline const SQLHDBC& ConnectionHandle::handle() const
{
	return _hdbc;
}


inline ConnectionHandle::operator SQLHDBC& ()
{
	return handle();
}


inline SQLHDBC& ConnectionHandle::handle()
{
	return _hdbc;
}


} } } // namespace Poco::Data::ODBC


#endif
