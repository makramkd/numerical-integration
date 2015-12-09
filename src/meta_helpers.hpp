//
// Created by Makram Kamaleddine on 12/9/15.
//

#ifndef SRC_META_HELPERS_HPP
#define SRC_META_HELPERS_HPP

#include <type_traits>

/**
 * A set of helpers that allow us to do some
 * compile time checks before instantiating
 * function and class templates. These were imported
 * from the repo at: s://github.com/makramkd/metaprogramming-cpp/
 */
namespace in {

    // get the arity of a function (i.e how many arguments it takes)
    template<typename Ret, typename... Args>
    struct arity_of;

    template<typename Ret, typename Arg0, typename... Args>
    struct arity_of<Ret(Arg0, Args...)>
    {
        static constexpr auto value = 1 + arity_of<Ret(Args...)>::value;
    };

    template<typename Ret>
    struct arity_of<Ret()>
    {
        static constexpr auto value = 0;
    };

    template<typename>
    struct return_type;

    template<typename Ret, typename... Args>
    struct return_type<Ret(Args...)>
    {
        using type = Ret;
    };

    // check for unary functions of signature
    // f : R -> R where R is a floating point type
    template<typename Float, typename Func>
    struct is_unary_arithmetic {
        static constexpr auto value = std::is_floating_point<Float>::value &&
                                      (arity_of<Func>::value == 1) &&
                std::is_floating_point<typename return_type<Func>::type>::value;
    };
}
#endif //SRC_META_HELPERS_HPP
