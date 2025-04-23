// ThreeDVec.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 13
// 22 Apr 2025

#include "ThreeDVec.hpp"
#include <cmath> // for sqrt()
#include <iostream> // to access istream and ostream

// constructors
ThreeDVec::ThreeDVec() : x(0), y(0), z(0) {}

ThreeDVec::ThreeDVec(double xval, double yval, double zval) : x(xval), y(yval), z(zval) {}

// class methods
double ThreeDVec::mag() const 
{
  return sqrt(x*x + y*y + z*z);
}

// operator overloads
ThreeDVec ThreeDVec::operator+(const ThreeDVec& other) const
{
  return ThreeDVec(x + other.x, y + other.y, z + other.z);
}

double ThreeDVec::operator*(const ThreeDVec& other) const
{
  return x * other.x + y * other.y + z * other.z;
}

ThreeDVec ThreeDVec::operator*(double scalar) const
{
  return ThreeDVec(x * scalar, y * scalar, z * scalar);
}

ThreeDVec ThreeDVec::operator^(const ThreeDVec& other) const 
{
  double newX = y * other.z -z * other.y;
  double newY = z * other.x - x * other.z;
  double newZ = x * other.y - y * other.x;

  return ThreeDVec(newX, newY, newZ);
}

std::istream& operator>>(std::istream& in, ThreeDVec& vec)
{
  in >> vec.x >> vec.y >> vec.z;
  return in;
}

std::ostream& operator<<(std::ostream& out, const ThreeDVec& vec)
{
  out << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
  return out;
}