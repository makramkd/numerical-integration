# numerical-integration
A set of numerical integration routines in C++.

# The details
We will implement the following routines/algorithms for numerical integration:
- Rectangle rule : this is as stupid as it gets
- Trapezoidal rule : just a bit smarter than rectangle rule.
- Iterated rule: break up the interval [a,b] into smaller pieces and use the rectangle or trapezoidal rule on these pieces,
then add up these separate sums (this kind of looks like Riemann sums)
- Simpson's rule: a numerical approximation to the definite integral credited to Thomas Simpson, a mathematician from the
1700s. It involves approximating the integrable function `f` by a polynomial `P` and then integrating that polynomial.
- Adaptive quadrature: you integrate `f` over some interval, and you check the error with the real value of the integral.
If it's too large, you integrate again, but over two different intervals, and with a smaller tolerance.

