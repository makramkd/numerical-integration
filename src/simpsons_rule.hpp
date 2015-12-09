//
// Created by Makram Kamaleddine on 12/9/15.
//

#ifndef SRC_SIMPSONS_RULE_HPP
#define SRC_SIMPSONS_RULE_HPP

#include "meta_helpers.hpp"

namespace in {

    template<typename Float, typename Func>
    typename std::enable_if<is_unary_arithmetic<Float, Func>::value, Float>::type
    simpsons_rule(const Func& f, Float a, Float b)
    {
        return ((b - a) / static_cast<Float>(6)) *
                (f(a) + static_cast<Float>(4) * f((a + b) / static_cast<Float>(2)) + f(b));
    }
}
#endif //SRC_SIMPSONS_RULE_HPP
