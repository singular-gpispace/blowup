#pragma once

#define NO_NAME_MANGLING extern "C"

#include <string>
#include <vector>

NO_NAME_MANGLING
std::vector<std::string> singular_template_compute ( std::string const&
                                   , std::string const&
                                   , std::string const&
																	 , std::string const&
                                   );

