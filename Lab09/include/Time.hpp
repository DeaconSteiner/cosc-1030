// Time.hpp
// Kim Buckner
// COSC 1030
// Lecture 14
//
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header file

#ifndef TIME_H
#define TIME_H

// the class functions are going to need these. 
#include<iostream>
using std::cout;
using std::endl;

#include<iomanip>
using std::setfill;
using std::setw;


// Time abstract data type (aka ADT) declaration

class Time
{
public:
  //allows default values for the constructor.
  //CAN ONLY BE USED IN DECLARATION!!!!!!!!
  Time( int h=0, int m=0, int s=0 );

  void setTime( int h, int m, int s );
  void setHour( int h );
  void setMinute( int m );
  void setSecond( int s );

  int getHour();
  int getMinute();
  int getSecond();

  void printUniversal();
  void printStandard();
private:
  int hour; // 0 - 23 (24-hour universal format)
  int minute; // 0 - 59
  int second; // 0 - 59
};

#endif
