// Params.hpp
// Kim Buckner
// COSC 1030
// Program 09
// Compute the linear least square line fit parameters.

#ifndef PARAMS_H
#define PARAMS_H

void LLParams(  const double x[], // Array of x values
    const double y[], // Array of y values
    int n,            // Length of input arrays
    double &m,        // Linear least square slope of line fit
    double &b);       // Linear least square y-intercept

#endif
