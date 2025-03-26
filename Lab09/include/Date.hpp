// Date.hpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 09
// Mar 26, 2025

// Date class containing a constructor with default arguments.
// Member functions defined in Date.cpp.

// Prevent multiple header inclusions.

#ifndef DATE_H
#define DATE_H

// Needed for class functions.
#include <iostream>
using std::cout;
using std::endl;

#include<iomanip>
using std::setfill;
using std::setw;

// Date abstract data type (aka ADT) declaration

class Date
{
  public:
  // allows default values for constructor.
  // Can only be used in declaration...
  Date( int y=0, int m=1, int d=1 );

  void setDate(int y, int m, int d);
  void setYear(int y);
  void setMonth(int m);
  void setDay(int d);

  int getYear();
  int getMonth();
  int getDay();

  void printUniversal(); // Display date in universal (YY/MM/DD) format.
  void printStandard(); // Display date in Standard US (MM/DD/YY) format.

  private:
  int year; // 0-2999
  int month; // 1-12
  int day; // 1-31
};

#endif