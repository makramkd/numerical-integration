//
// Created by Makram Kamaleddine on 12/9/15.
//

#ifndef SRC_ITERATED_RULE_HPP
#define SRC_ITERATED_RULE_HPP

#include <numeric>
#include <algorithm>

#include "meta_helpers.hpp"
#include "trapezoidal_rule.hpp"
#include "rectangle_rule.hpp"
#include "linspace.hpp"

namespace in {

    template<typename Float, typename Func>
    typename std::enable_if<is_unary_arithmetic<Float, Func>::value, Float>::type
    iterated_rectangle(const Func& f, Float a, Float b, int pieces)
    {
        auto intervals = math::linspace(a, b, pieces);
        std::vector<Float> partials;

        std::for_each(intervals.begin(), intervals.end(), [&partials,&f](const std::pair<Float, Float>& pair) {
            partials.push_back(rectangle_rule(f, pair.first, pair.second));
        });

        return std::accumulate(partials.begin(), partials.end(), static_cast<Float>(0.0));
    }

    template<typename Float, typename Func>
    typename std::enable_if<is_unary_arithmetic<Float, Func>::value, Float>::type
    iterated_trapezoidal(const Func& f, Float a, Float b, int pieces)
    {
        auto intervals = math::linspace(a, b, pieces);
        std::vector<Float> partials;

        std::for_each(intervals.begin(), intervals.end(), [&partials, &f](const std::pair<Float, Float>& pair) {
            partials.push_back(trapezoidal_rule(f, pair.first, pair.second));
        });

        return std::accumulate(partials.begin(), partials.end(), static_cast<Float>(0.0));
    }
}
#endif //SRC_ITERATED_RULE_HPP
