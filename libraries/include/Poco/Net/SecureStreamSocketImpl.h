//
// SecureStreamSocketImpl.h
//
// $Id: //poco/1.3/NetSSL_OpenSSL/include/Poco/Net/SecureStreamSocketImpl.h#7 $
//
// Library: NetSSL_OpenSSL
// Package: SSLSockets
// Module:  SecureStreamSocketImpl
//
// Definition of the SecureStreamSocketImpl class.
//
// Copyright (c) 2006-2009, Applied Informatics Software Engineering GmbH.
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


#ifndef NetSSL_SecureStreamSocketImpl_INCLUDED
#define NetSSL_SecureStreamSocketImpl_INCLUDED


#include "Poco/Net/NetSSL.h"
#include "Poco/Net/SecureSocketImpl.h"
#include "Poco/Net/StreamSocketImpl.h"
#include "Poco/Net/Context.h"
#include "Poco/Net/X509Certificate.h"


namespace Poco {
namespace Net {


class NetSSL_API SecureStreamSocketImpl: public StreamSocketImpl
	/// This class implements a SSL stream socket.
{
public:
	SecureStreamSocketImpl(Context::Ptr pContext);
		/// Creates the SecureStreamSocketImpl.

	SecureStreamSocketImpl(StreamSocketImpl* pStreamSocket, Context::Ptr pContext);
		/// Creates the SecureStreamSocketImpl.

	SocketImpl* acceptConnection(SocketAddress& clientAddr);
		/// Not supported by a SecureStreamSocket.
		///
		/// Throws a Poco::InvalidAccessException.

	void connect(const SocketAddress& address);
		/// Initializes the socket and establishes a connection to 
		/// the TCP server at the given address.
		///
		/// Can also be used for UDP sockets. In this case, no
		/// connection is established. Instead, incoming and outgoing
		/// packets are restricted to the specified address.

	void connect(const SocketAddress& address, const Poco::Timespan& timeout);
		/// Initializes the socket, sets the socket timeout and 
		/// establishes a connection to the TCP server at the given address.

	void connectNB(const SocketAddress& address);
		/// Initializes the socket and establishes a connection to 
		/// the TCP server at the given address. Prior to opening the
		/// connection the socket is set to nonblocking mode.
		
	void bind(const SocketAddress& address, bool reuseAddress = false);
		/// Not supported by a SecureStreamSocket.
		///
		/// Throws a Poco::InvalidAccessException.
		
	void listen(int backlog = 64);
		/// Not supported by a SecureStreamSocket.
		///
		/// Throws a Poco::InvalidAccessException.

	void close();
		/// Close the socket.
	
	int sendBytes(const void* buffer, int length, int flags = 0);
		/// Sends the contents of the given buffer through
		/// the socket. Any specified flags are ignored.
		///
		/// Returns the number of bytes sent, which may be
		/// less than the number of bytes specified.
	
	int receiveBytes(void* buffer, int length, int flags = 0);
		/// Receives data from the socket and stores it
		/// in buffer. Up to length bytes are received.
		///
		/// Returns the number of bytes received.
	
	int sendTo(const void* buffer, int length, const SocketAddress& address, int flags = 0);
		/// Not supported by a SecureStreamSocket.
		///
		/// Throws a Poco::InvalidAccessException.
	
	int receiveFrom(void* buffer, int length, SocketAddress& address, int flags = 0);
		/// Not supported by a SecureStreamSocket.
		///
		/// Throws a Poco::InvalidAccessException.
	
	void sendUrgent(unsigned char data);
		/// Not supported by a SecureStreamSocket.
		///
		/// Throws a Poco::InvalidAccessException.

	void shutdownReceive();
		/// Shuts down the receiving part of the socket connection.
		///
		/// Since SSL does not support a half shutdown, this does
		/// nothing.
		
	void shutdownSend();
		/// Shuts down the receiving part of the socket connection.
		///
		/// Since SSL does not support a half shutdown, this does
		/// nothing.
		
	void shutdown();
		/// Shuts down the SSL connection.

	void setPeerHostName(const std::string& hostName);
		/// Sets the peer host name for certificate validation purposes.
		
	const std::string& getPeerHostName() const;
		/// Returns the peer host name.

	X509Certificate peerCertificate() const;
		/// Returns the peer's X509 certificate.
		
	Context::Ptr context() const;
		/// Returns the SSL context used by this socket.

	void setLazyHandshake(bool flag = true);
		/// Enable lazy SSL handshake. If enabled, the SSL handshake
		/// will be performed the first time date is sent or
		/// received over the connection.
		
	bool getLazyHandshake() const;
		/// Returns true if setLazyHandshake(true) has been called.

	void verifyPeerCertificate();
		/// Performs post-connect (or post-accept) peer certificate validation,
		/// using the peer's IP address as host name.

	void verifyPeerCertificate(const std::string& hostName);
		/// Performs post-connect (or post-accept) peer certificate validation
		/// using the given host name.

	int completeHandshake();
		/// Completes the SSL handshake.
		///
		/// If the SSL connection was the result of an accept(),
		/// the server-side handshake is completed, otherwise
		/// a client-side handshake is performed. 
		
protected:
	void acceptSSL();
		/// Performs a SSL server-side handshake.
	
	void connectSSL();
		/// Performs a SSL client-side handshake on an already connected TCP socket.
	
	~SecureStreamSocketImpl();
		/// Destroys the SecureStreamSocketImpl.

	static int lastError();
	static void error();
	static void error(const std::string& arg);
	static void error(int code);
	static void error(int code, const std::string& arg);

private:
	SecureStreamSocketImpl(const SecureStreamSocketImpl&);
	SecureStreamSocketImpl& operator = (const SecureStreamSocketImpl&);

	SecureSocketImpl _impl;
	bool             _lazyHandshake;

	friend class SecureSocketImpl;
	friend class SecureStreamSocket;
};


//
// inlines
//
inline const std::string& SecureStreamSocketImpl::getPeerHostName() const
{
	return _impl.getPeerHostName();
}


inline void SecureStreamSocketImpl::setPeerHostName(const std::string& peerHostName)
{
	_impl.setPeerHostName(peerHostName);
}


inline Context::Ptr SecureStreamSocketImpl::context() const
{
	return _impl.context();
}


inline int SecureStreamSocketImpl::lastError()
{
	return SocketImpl::lastError();
}


inline void SecureStreamSocketImpl::error()
{
	return SocketImpl::error();
}


inline void SecureStreamSocketImpl::error(const std::string& arg)
{
	return SocketImpl::error(arg);
}


inline void SecureStreamSocketImpl::error(int code)
{
	return SocketImpl::error(code);
}


inline void SecureStreamSocketImpl::error(int code, const std::string& arg)
{
	return SocketImpl::error(code, arg);
}


} } // namespace Poco::Net


#endif // NetSSL_SecureStreamSocketImpl_INCLUDED
