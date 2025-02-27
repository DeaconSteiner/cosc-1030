// TestArea.cpp
// Kim Buckner
// COSC 1030
// Lecture 09
// Example tests of the disk and ring area functions.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// My header file.
// DO NOT INCLUDE THE .cpp
#include "DArea.hpp"

int main()
{
  double inner, outer;

  cout << "Enter the inner and outer radii of the ring:  ";
  cin >> inner >> outer;

  cout << endl << "A ring with radial dimensions of " 
    << inner << " and " << outer << endl
    << "has surface area of "
    << ringArea(inner,outer) << " square units." << endl;

  return 0;
}
