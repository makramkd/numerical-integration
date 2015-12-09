#include <iostream>
#include "integrate.hpp"

double f(double x) {
    return x * x;
}

int main() {
    auto value = in::rectangle_rule(f, 0.0, 1.0);
    auto tvalue = in::trapezoidal_rule(f, 0.0, 1.0);
    auto svalue = in::simpsons_rule(f, 0.0, 1.0);

    std::cout << "rectangle rule: " << value << std::endl;
    std::cout << "trapezoidal rule: " << tvalue << std::endl;
    std::cout << "simpson's rule: " << svalue << std::endl;
}