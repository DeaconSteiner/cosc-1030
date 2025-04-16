// Prog12.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 12
// 16 Apr 2025

#include <iostream>
using std::cout;
using std::endl;

#include "Circle.hpp"
#include "Square.hpp"
#include "EqTriangle.hpp"

// These are the STL elements we will use.
#include <vector>
using std::vector;
#include <algorithm>

// Comparison function
bool compPerimeters(TwoDShape* left, TwoDShape* right) 
{ return left->getPerimeter() < right->getPerimeter(); }

int main()
{
  vector<TwoDShape*> ShapeSet(0);
  // the "push_back()" function adds an element 
  // to the read of the vector
  ShapeSet.push_back( new Square(2) );
  ShapeSet.push_back( new Circle(3) );
  ShapeSet.push_back( new EqTriangle(1.5) );
  ShapeSet.push_back( new Square(1) );
  ShapeSet.push_back( new EqTriangle(2) );

  cout << "The unsorted shapes are as follows:" << endl;
  for(size_t i=1; i<=ShapeSet.size(); i++) {
      cout << "(" << i << ") " << ShapeSet[i-1]->getName()
	<< " with Perimeter " << ShapeSet[i-1]->getPerimeter() << endl;
  }

  //Now sort the vector's elements
  sort(ShapeSet.begin(), ShapeSet.end(), compPerimeters);

  cout << endl << "The shape list, sorted by perimeter, is as follows:" << endl;
  for(size_t i=1; i<=ShapeSet.size(); i++) {
    cout << "(" << i << ") " << ShapeSet[i-1]->getName()
      << " with perimeter " << ShapeSet[i-1]->getPerimeter() << endl;
  }

  return 0;
}