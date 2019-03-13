// Copyright 2018-2019 Rene Rivera
// Copyright 2017 Two Blue Cubes Ltd. All rights reserved.
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef LYRA_DETAIL_PARSE_HPP
#define LYRA_DETAIL_PARSE_HPP

#include "lyra/detail/from_string.hpp"
#include "lyra/parser_result.hpp"

#include <string>

namespace lyra
{
namespace detail
{
    template <typename T>
    parser_result parse_string(std::string const& source, T& target)
    {
        if (from_string(source, target))
            return parser_result::ok(parser_result_type::matched);
        else
            return parser_result::runtimeError("Unable to convert '" + source + "' to destination type");
    }
}
} // namespace lyra

#endif