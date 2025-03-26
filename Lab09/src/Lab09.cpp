// Lab09.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 09
// Mar 26, 2025

#include <iostream>
using std::cout;
using std::endl;

#include "Time.hpp"
#include "Date.hpp"

int main()
{
  Time t[5];
  t[1] = Time( 2 );
  t[2] = Time( 21, 34 );
  t[3] = Time( 11, 59, 20 );
  t[4] = Time( 32, -1, 99 );

  Date d[5];
  d[1] = Date(-1, -1, 4);
  d[2] = Date(0, 9, 21);
  d[3] = Date(1920, 12, 23);
  d[4] = Date(-24, -36, 56);

  for(int i=0; i<5; i++) {
    cout << "Here's date/time " << i << ":  ";
    d[i].printUniversal();
    cout << " / ";
    t[i].printUniversal();
    cout << " or ";
    d[i].printStandard();
    cout << " / ";
    t[i].printStandard();
    cout << endl;
  }

  return 0;
}
