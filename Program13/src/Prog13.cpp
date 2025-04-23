// Prog13.cpp
// Kim Buckner
// COSC1030
// Program 13
//
// Test program to demonstrate and validate desired behavior
// of the new C++ class ThreeDVec .
//
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "ThreeDVec.hpp"

int main()
{
  ThreeDVec A;
  cout << "A is " << A << endl << endl;
  ThreeDVec X(1,0,0), Y(0,1,0), Z(0,0,1);
  cout << "X+Y+Z is " << X+Y+Z << endl << endl;

  ThreeDVec B(3,4,5);
  cout << "B is " << B << endl;
  cout << "||B|| is " << B.mag() << endl;
  cout << "B dot Y is " << B*Y << endl << endl;;
  
  ThreeDVec C(X+Y+Z);
  cout << "C is " << C << endl;
  cout << "B cross C is " << (B^C) << endl;
  cout << "B dot (B cross C) is " << B*(B^C) << endl << endl;

  ThreeDVec D;
  cout << "Enter your vector coefficients as x y z:  ";
  cin >> D;
  cout << "D is " << D << " with magnitude " << D.mag() << endl;
  ThreeDVec E=D*(1/D.mag());  // This is a scalar multiplying a vector
  cout << "Normalized D is |" << E << "| = " << E.mag() << endl << endl;

  return 0;
}
