/*------------------------------------------------------------------------------
                Copyright Butterfly Energy Systems 2014-2015.
           Distributed under the Boost Software License, Version 1.0.
              (See accompanying file LICENSE_1_0.txt or copy at
                    http://www.boost.org/LICENSE_1_0.txt)
------------------------------------------------------------------------------*/

#include <cppwamp/internal/config.hpp>

#ifdef CPPWAMP_COMPILED_LIB

#include <cppwamp/legacytcpconnector.hpp>
#include <cppwamp/internal/legacytcpconnector.ipp>

#if CPPWAMP_HAS_UNIX_DOMAIN_SOCKETS
#include <cppwamp/legacyudsconnector.hpp>
#include <cppwamp/internal/legacyudsconnector.ipp>
#endif

#endif
