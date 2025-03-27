// Params.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 09
// 27 Mar 2025

#include "Params.hpp"

void LLParams(  const double x[], const double y[], int n, double &m, double &b)
{
  // Initialize sum variables
  double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

  // Sumation calculations
  for (int i = 0; i < n; ++i)
  {
    sumX += x[i];
    sumY += y[i];
    sumXY += x[i] * y[i];
    sumX2 += x[i] * x[i];
  }

  // Compute m and b using the formula
  m = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX); // slope (m)
  b = (sumY - m * sumX) / n; // Intercept (b)
}