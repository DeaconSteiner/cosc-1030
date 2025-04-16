// Square.hpp
// Kim Buckner
// COSC 1030
// Program 12
// Combined declaration and definition.

#ifndef SQUARE_H
#define SQUARE_H

#include "TwoDShape.hpp"
#include "Point.hpp"

class Square : public TwoDShape
{
public:

  Square(double dside=0, Point refp=Point(0,0), double dangle=0)
    : TwoDShape(refp,dangle) , side(dside) { name = "square"; }

  Square(const Square& square) 
    : TwoDShape(square.refpoint, square.angle) , side(square.side) 
    { name = "square"; }

  virtual ~Square() { }
  
  virtual void setSide(double dside)
    { side = (dside < 0) ? 0 : dside; }

  virtual double getSide() const { return side; }

  virtual double getPerimeter() const
    { return 4*side; }

  virtual double getArea() const 
    { return side*side; }

protected:

  double side;
};
#endif

