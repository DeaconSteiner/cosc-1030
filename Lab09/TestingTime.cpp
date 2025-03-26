// TestingTime.cpp
// Kim Buckner
// COSC 1030
// Lecture 14
//
// Exercise the Time class

#include <iostream>
using std::cout;
using std::endl;

#include "Time.hpp"

int main()
{
  Time t[5];
  t[1] = Time( 2 );
  t[2] = Time( 21, 34 );
  t[3] = Time( 11, 59, 20 );
  t[4] = Time( 32, -1, 99 );

  for(int i=0; i<5; i++) {
    cout << "Here's t[" << i << "]:  ";
    t[i].printUniversal();
    cout << " or ";
    t[i].printStandard();
    cout << endl;
  }


  return 0;
}
