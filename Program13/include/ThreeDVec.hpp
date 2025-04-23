// ThreeDVec.hpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 13
// 22 Apr 2025

#ifndef THREEDVEC_HPP
#define THREEDVEC_HPP

#include <iostream>

class ThreeDVec
{
private:
  double x;
  double y;
  double z;

public:
  // constructors
  ThreeDVec();
  ThreeDVec(double, double, double);


  // class methods
  double mag() const;

  // operator overloads
  // vector addition
  ThreeDVec operator+(const ThreeDVec&) const;
  // dot product
  double operator*(const ThreeDVec&) const;
  // scalar multiplication
  ThreeDVec operator*(double) const;
  // cross product
  ThreeDVec operator^(const ThreeDVec&) const;


  // I/O stream operator overloads
  friend std::istream& operator>>(std::istream&, ThreeDVec&);
  friend std::ostream& operator<<(std::ostream&, const ThreeDVec&);
};

#endif






