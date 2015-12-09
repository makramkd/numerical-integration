//
// Created by Makram Kamaleddine on 12/9/15.
//

#ifndef SRC_ITERATED_RULE_HPP
#define SRC_ITERATED_RULE_HPP

#include "meta_helpers.hpp"

namespace in {

    template<typename Float, typename Func>
    typename std::enable_if<is_unary_arithmetic<Float, Func>::value, Float>::type
    iterated_rectangle(const Func& f, Float a, Float b, int pieces)
    {

    }

    template<typename Float, typename Func>
    typename std::enable_if<is_unary_arithmetic<Float, Func>::value, Float>::type
    iterated_trapezoidal(const Func& f, Float a, Float b, int pieces)
    {

    }
}
#endif //SRC_ITERATED_RULE_HPP
