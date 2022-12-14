# This file is part of GPI-Space.
# Copyright (C) 2021 Fraunhofer ITWM
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <https://www.gnu.org/licenses/>.

# equivalent to CMakeParseArguments except that parse_arguments
# * forbids UNPARSED_ARGUMENTS but requires to explicitly use
#   parse_arguments_with_unknown
# * allows to specify required arguments

include (CMakeParseArguments)

macro (_parse_arguments _prefix _options _one_value_options _multi_value_options _required_options)
  _parse_arguments_with_unknown ("${_prefix}" "${_options}" "${_one_value_options}" "${_multi_value_options}" "${_required_options}" ${ARGN})

  if (${_prefix}_UNPARSED_ARGUMENTS)
    list (LENGTH ${_prefix}_UNPARSED_ARGUMENTS _unparsed_length)
    if (NOT _unparsed_length EQUAL 0)
      message (FATAL_ERROR "unknown arguments: ${${_prefix}_UNPARSED_ARGUMENTS}")
    endif()
  endif()
endmacro()

macro (_parse_arguments_with_unknown _prefix _options _one_value_options _multi_value_options _required_options)
  cmake_parse_arguments ("${_prefix}" "${_options}" "${_one_value_options}" "${_multi_value_options}" ${ARGN})

  foreach (required ${_required_options})
    if (NOT ${_prefix}_${required})
      message (FATAL_ERROR "required argument ${required} missing")
    endif()
  endforeach()
endmacro()
