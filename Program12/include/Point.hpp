// Point.hpp
// Kim Buckner
// COSC 1030
// Program 12
// Combined declaration and definition.

#ifndef POINT_H
#define POINT_H

//
// Do not really need a destructor, nothing allocated and I am not extending
// this object.
//
class Point {
public:

  Point(double dx=0, double dy=0) : x(dx), y(dy) {}

  Point(const Point& dpt) : x(dpt.getX()), y(dpt.getY()) {}

  void setX(double dx) { x=dx; }

  double getX() const { return x; }

  void setY(double dy) { y=dy; }

  double getY() const { return y; }

private:

  double x;
  double y;
};

#endif

