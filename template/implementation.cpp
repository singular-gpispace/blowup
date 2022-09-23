#include <Singular/libsingular.h>

#include <share/include/template_interface.hpp>

#include <iostream>
#include <stdexcept>
#include <unistd.h>

#include "config.hpp"
#include "singular_functions.hpp"
NO_NAME_MANGLING

std::string  singular_template_compute( std::string const& input_filename 
																			, std::string const& function_name
																			, std::string const& needed_library
																			, std::string const& base_filename
																			)
{
	init_singular (config::library().string());
	load_singular_library(needed_library);
	std::pair<int,lists> input;
	std::pair<int, lists> out;
	std::string ids;
	std::string out_filename;
	ids = worker();
	std::cout << ids << " in singular_..._compute" << std::endl;
	input = deserialize(input_filename,ids);
	ScopedLeftv args( input.first, lCopy(input.second));
	out = call_user_proc(function_name, needed_library, args);
	out_filename = serialize(out.second, base_filename, ids);
	return out_filename;
}

