// This file is part of GPI-Space.
// Copyright (C) 2021 Fraunhofer ITWM
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.

#include <util-generic/test/testing/printer/require_printed_as.hpp>
#include <util-generic/testing/printer/vector.hpp>

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE (empty)
{
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS ("vector ()", std::vector<std::string>{});
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS ("vector ()", std::vector<int>{});
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS ("vector ()", std::vector<float>{});
}

BOOST_AUTO_TEST_CASE (one_element)
{
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS
    ("vector (foo)", std::vector<std::string> {"foo"});
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS
    ("vector (1)", std::vector<int> {1});
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS
    ("vector (1)", std::vector<float> {1.0f});
}

BOOST_AUTO_TEST_CASE (multiple_elements)
{
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS
    ("vector (foo, bar, baz)", std::vector<std::string> {"foo", "bar", "baz"});
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS
    ("vector (1, 63, 4523)", std::vector<int> {1, 63, 4523});
  FHG_UTIL_TESTING_REQUIRE_PRINTED_AS
    ("vector (1, 2, 16.3999996)", std::vector<float> {1.0f, 2.0f, 16.4f});
}
