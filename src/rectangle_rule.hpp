//
// Created by Makram Kamaleddine on 12/9/15.
//

#ifndef SRC_RECTANGLE_RULE_HPP
#define SRC_RECTANGLE_RULE_HPP

#include <type_traits>
#include "meta_helpers.hpp"

namespace in {

    /**
     * Integrate a given function f : R -> R using the
     * rectangle rule.
     */
    template<typename Float, typename Func>
    typename std::enable_if<std::is_floating_point<Float>::value &&
            (arity_of<Func>::value == 1) && std::is_floating_point<typename return_type<Func>::type>::value
            , Float>::type
            rectangle_rule(const Func& f, Float a, Float b)
    {
        return (b - a) * f((a + b) / 2);
    }
}
#endif //SRC_RECTANGLE_RULE_HPP
