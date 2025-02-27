// DArea.cpp
// Kim Buckner
// COSC 1030
// Lecture 09
// Definitions and implementations for the area computation functions.

#include<cmath> //atan() function

double discArea(double radius)
{
  const double PI=4*atan(1.0);
  return PI*radius*radius;
}

double ringArea(double firstr, double secondr)
{
  double area;
  if (firstr > secondr) { // We'll handle any order of inputs.
    area=discArea(firstr)-discArea(secondr);
  } else {
    area=discArea(secondr)-discArea(firstr);
  }
  return area;
}
