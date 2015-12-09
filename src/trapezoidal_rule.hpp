//
// Created by Makram Kamaleddine on 12/9/15.
//

#ifndef SRC_TRAPEZOIDAL_RULE_HPP
#define SRC_TRAPEZOIDAL_RULE_HPP

#include "meta_helpers.hpp"

namespace in {

    /**
     * Calculate the integral of a given f: R -> R
     * using the trapezoidal rule.
     */
    template<typename Float, typename Func>
    typename std::enable_if<is_unary_arithmetic<Float, Func>::value,
            Float>::type trapezoidal_rule(const Func& f, Float a, Float b)
    {
        return (b - a) * (f(a) + f(b)) / (static_cast<Float>(2));
    }
}
#endif //SRC_TRAPEZOIDAL_RULE_HPP
