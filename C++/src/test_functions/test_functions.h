#ifndef IMPRS_TEST_FUNCTIONS_H
#define IMPRS_TEST_FUNCTIONS_H

#include <armadillo>

namespace test_functions {

    /*
     @brief Rosenbrock function.

      Formula:
      f(x) = sum_{i=1}^{n-1} [ 100 (x_{i+1} - x_i^2)^2 + (x_i - 1)^2 ]

      Global minimum: f(x) = 0 at x = (1, 1, ..., 1)

      @param x Coordinate
      @return Function evaluation at \x
     */
    double rosenbrock(const arma::vec& x);

    /// @brief Derivative of the Rosenbrock function.
    arma::vec derivative_rosenbrock(const arma::vec& x);
}

#endif
