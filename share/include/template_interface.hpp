#pragma once

#define NO_NAME_MANGLING extern "C"

#include <string>

NO_NAME_MANGLING
std::string singular_template_compute ( std::string const&
                                   , std::string const&
                                   , std::string const&
																	 , std::string const&
                                   );

