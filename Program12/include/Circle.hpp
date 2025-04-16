// Circle.hpp
// Kim Buckner
// COSC 1030
// Program 12
// Combined declaration and definition.

#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
#include "TwoDShape.hpp"
#include "Point.hpp"

class Circle : public TwoDShape
{
public:

  Circle(double dradius=0, Point refp=Point(0,0), double dangle=0)
    : TwoDShape(refp,dangle) , radius(dradius) { name = "circle"; }

  Circle(const Circle& circ)
    : TwoDShape(circ.refpoint, circ.angle) , radius(circ.radius) 
    { name = "circle"; }

  ~Circle() { }
  
  virtual void setRadius(double dradius)
    { radius = (dradius < 0) ? 0 : dradius; }

  virtual double getRadius() const { return radius; }

  virtual double getPerimeter() const
    { return 2*atan2(1.0,1.0)*4*radius; }

  virtual double getArea() const 
    { return atan2(1.0,1.0)*4*radius*radius; }

protected:

  double radius;
};
#endif

