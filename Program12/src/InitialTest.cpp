// InitialTest.cpp
// Kim Buckner
// COSC 1030
// Program 12
/*
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

//Compares the areas of two shapes.  This function is for 
//the "sort()" function to use to compare the vector elements
bool compAreas(TwoDShape* left, TwoDShape* right) 
{ 
  return left->getArea() < right->getArea(); 
}

int main()
{
  vector<TwoDShape*> ShapeSet(0);
  // the "push_back()" function adds an element 
  // to the read of the vector
  ShapeSet.push_back( new Circle(1) );
  ShapeSet.push_back( new Square(1) );
  ShapeSet.push_back( new EqTriangle(1) );
  ShapeSet.push_back( new Circle(2) );
  ShapeSet.push_back( new EqTriangle(1.75) );

  cout << "InitialTest.cpp \n" << endl;

  cout << "The unsorted shapes are as follows:" << endl;
  for(size_t i=1; i<=ShapeSet.size(); i++) {
      cout << "(" << i << ") " << ShapeSet[i-1]->getName()
	<< " with area " << ShapeSet[i-1]->getArea() << endl;
  }

  //Now sort the vector's elements
  sort(ShapeSet.begin(), ShapeSet.end(), compAreas);

  cout << endl << "The shape list, sorted by area, is as follows:" << endl;
  for(size_t i=1; i<=ShapeSet.size(); i++) {
    cout << "(" << i << ") " << ShapeSet[i-1]->getName()
      << " with area " << ShapeSet[i-1]->getArea() << endl;
  }

  return 0;
}
*/