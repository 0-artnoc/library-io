////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library ▸ I/O
/// @file           LibraryIOPy/IP/TCP/HTTP/Client.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Library/IO/IP/TCP/HTTP/Client.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void                     LibraryIOPy_IP_TCP_HTTP_Client              ( )
{

    using namespace boost::python ;

    using library::io::ip::tcp::http::Client ;

    scope in_Client = class_<Client>("Client", no_init)

        .def("Send", &Client::Send).staticmethod("Send")
        .def("Get", &Client::Get).staticmethod("Get")
        .def("Fetch", &Client::Fetch).staticmethod("Fetch")
        .def("List", &Client::List).staticmethod("List")

    ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
