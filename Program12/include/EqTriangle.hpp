// EqTriangle.hpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 12
// 16 Apr 2025

#ifndef EQTRIANGLE_H
#define EQTRIANGLE_H

#include <cmath>
#include "TwoDShape.hpp"
#include "Point.hpp"

class EqTriangle : public TwoDShape
{
  public:
    EqTriangle(double slength=1, Point refp= Point (0,0), double dangle=60) : TwoDShape(refp, dangle), sidelength(slength) { name = "equilateral triangle"; }

    EqTriangle(const EqTriangle& tri)
    : TwoDShape(tri.refpoint, tri.angle) , sidelength(tri.sidelength) 
    { name = "equilateral triangle"; }

    ~EqTriangle() {}

    // accessors
    virtual void setSideLength(double slength)
    { sidelength = (slength < 0) ? 0 : slength; }

    virtual double getSideLength() const { return sidelength; }

    // area and perimeter methods

    virtual double getArea() const
    { return ((sqrt(3) / 4) * pow(sidelength, 2)); }

    virtual double getPerimeter() const
    { return 3*sidelength; }

  protected:
    double sidelength;

};

#endif