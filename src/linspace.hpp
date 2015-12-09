//
// Created by Makram Kamaleddine on 12/9/15.
//

#ifndef SRC_LINSPACE_HPP
#define SRC_LINSPACE_HPP

#include <vector>

namespace in {

    /**
     * Given two numbers a and b with b > a,
     * divide the interval [a, b] into p equally
     * spaces pieces.
     */
    template<typename T>
    typename std::enable_if<std::is_floating_point<T>::value, std::vector<std::pair<T, T>>>::type
    linspace(T a, T b, int p)
    {
        // if p is 0 it's the caller's fault
        auto inc = (b - a) / p;

        std::vector<std::pair<T, T>> intervals;
        auto start = a;
        while (start < b)
        {
            intervals.push_back(std::make_pair(start, start + inc));
            start = start + inc;
        }

        return intervals;
    }
}
#endif //SRC_LINSPACE_HPP
