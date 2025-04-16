// TwoDShape.hpp
// Kim Buckner
// COSC 1030
// Program 12
// Combined declaration and definition.

#ifndef TWODSHAPE_H
#define TWODSHAPE_H

#include<iostream>
using std::endl;
using std::cout;
#include <string> // the standard C++ version of the string
using std::string;
#include "Point.hpp"

class TwoDShape {
public:

  TwoDShape(Point refp=Point(0,0), double dangle=0) 
    : refpoint(refp), angle(dangle) { name = "2-D shape"; }

  virtual ~TwoDShape() { }

  virtual string getName() const { return name; }

  virtual void setRefPoint(Point refp) { refpoint=refp; }

  virtual Point getRefPoint() const { return refpoint; }

  virtual void setAngle(double dangle) { angle=dangle; }

  virtual double getAngle() const { return angle; }

  virtual void rotate(double delangle) { angle = angle+delangle; }

  virtual double getPerimeter() const = 0; // This makes it Abstract!

  virtual double getArea() const = 0; // Not to mention this one.

protected:

  Point refpoint;
  double angle;
  string name;
};

#endif

