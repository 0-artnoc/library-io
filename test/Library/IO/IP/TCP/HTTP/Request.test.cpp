////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/IO
/// @file           Library/IO/IP/TCP/HTTP/Request.test.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        TBD

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Library/IO/IP/TCP/HTTP/Request.hpp>

#include <Global.test.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TEST (Library_IO_IP_TCP_HTTP_Request, Constructor)
{

    using library::core::types::String ;

    using library::io::URL ;
    using library::io::ip::tcp::http::Request ;

    {

        const Request::Method method = Request::Method::GET ;
        const URL url = URL::Parse("https://www.google.com") ;
        const String body = "body" ;

        EXPECT_NO_THROW(Request request (method, url, body) ;) ;
        
    }

}

TEST (Library_IO_IP_TCP_HTTP_Request, StreamOperator)
{

    using library::core::types::String ;

    using library::io::URL ;
    using library::io::ip::tcp::http::Request ;

    {

        const Request::Method method = Request::Method::GET ;
        const URL url = URL::Parse("https://www.google.com") ;
        const String body = "body" ;

        const Request request = { method, url, body } ;

        testing::internal::CaptureStdout() ;

        EXPECT_NO_THROW(std::cout << request << std::endl) ;

        EXPECT_FALSE(testing::internal::GetCapturedStdout().empty()) ;
        
    }

}

TEST (Library_IO_IP_TCP_HTTP_Request, IsDefined)
{

    using library::core::types::String ;

    using library::io::URL ;
    using library::io::ip::tcp::http::Request ;

    {

        const Request::Method method = Request::Method::GET ;
        const URL url = URL::Parse("https://www.google.com") ;
        const String body = "body" ;

        const Request request = { method, url, body } ;

        EXPECT_TRUE(request.isDefined()) ;
        
    }

    {

        EXPECT_FALSE(Request::Undefined().isDefined()) ;

    }

}

TEST (Library_IO_IP_TCP_HTTP_Request, GetMethod)
{

    using library::core::types::String ;

    using library::io::URL ;
    using library::io::ip::tcp::http::Request ;

    {

        const Request::Method method = Request::Method::GET ;
        const URL url = URL::Parse("https://www.google.com") ;
        const String body = "body" ;

        const Request request = { method, url, body } ;

        EXPECT_EQ(method, request.getMethod()) ;
        
    }

    {

        EXPECT_ANY_THROW(Request::Undefined().getMethod()) ;

    }

}

TEST (Library_IO_IP_TCP_HTTP_Request, GetUrl)
{

    using library::core::types::String ;

    using library::io::URL ;
    using library::io::ip::tcp::http::Request ;

    {

        const Request::Method method = Request::Method::GET ;
        const URL url = URL::Parse("https://www.google.com") ;
        const String body = "body" ;

        const Request request = { method, url, body } ;

        EXPECT_EQ(url, request.getUrl()) ;
        
    }

    {

        EXPECT_ANY_THROW(Request::Undefined().getUrl()) ;

    }

}

TEST (Library_IO_IP_TCP_HTTP_Request, GetBody)
{

    using library::core::types::String ;

    using library::io::URL ;
    using library::io::ip::tcp::http::Request ;

    {

        const Request::Method method = Request::Method::GET ;
        const URL url = URL::Parse("https://www.google.com") ;
        const String body = "Hello World!" ;

        const Request request = { method, url, body } ;

        EXPECT_EQ(body, request.getBody()) ;
        
    }

    {

        EXPECT_ANY_THROW(Request::Undefined().getBody()) ;

    }

}

TEST (Library_IO_IP_TCP_HTTP_Request, Undefined)
{

    using library::io::ip::tcp::http::Request ;

    {

        EXPECT_NO_THROW(Request::Undefined()) ;
        EXPECT_FALSE(Request::Undefined().isDefined()) ;
        
    }

}

TEST (Library_IO_IP_TCP_HTTP_Request, Get)
{

    using library::io::URL ;
    using library::io::ip::tcp::http::Request ;

    {

        const URL url = URL::Parse("https://www.google.com") ;

        EXPECT_EQ(Request::Method::GET, Request::Get(url).getMethod()) ;
        
    }

}

TEST (Library_IO_IP_TCP_HTTP_Request, StringFromMethod)
{

    using library::io::ip::tcp::http::Request ;

    {

        EXPECT_EQ("Undefined", Request::StringFromMethod(Request::Method::Undefined)) ;
        EXPECT_EQ("GET", Request::StringFromMethod(Request::Method::GET)) ;
        EXPECT_EQ("HEAD", Request::StringFromMethod(Request::Method::HEAD)) ;
        EXPECT_EQ("POST", Request::StringFromMethod(Request::Method::POST)) ;
        EXPECT_EQ("PUT", Request::StringFromMethod(Request::Method::PUT)) ;
        EXPECT_EQ("DELETE", Request::StringFromMethod(Request::Method::DELETE)) ;
        EXPECT_EQ("TRACE", Request::StringFromMethod(Request::Method::TRACE)) ;
        EXPECT_EQ("OPTIONS", Request::StringFromMethod(Request::Method::OPTIONS)) ;
        EXPECT_EQ("CONNECT", Request::StringFromMethod(Request::Method::CONNECT)) ;
        EXPECT_EQ("PATCH", Request::StringFromMethod(Request::Method::PATCH)) ;
        
    }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////