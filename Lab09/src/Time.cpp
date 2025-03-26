// Time.cpp
// Kim Buckner
// COSC 1030
// Lecture 14
//
// Member-function definitions for class Time.

#include "Time.hpp"

//
// Constructor: the defaults (in the header ONLY) allow a usage like Time()
// that is, I can use a 'no values' or 'default' constructor.
// The defaults are NOT USED HERE!!!!!
//
Time::Time( int h, int m, int s )
{
  setTime( h, m, s );
}

//
// The accessor functions
//
void Time::setTime( int h, int m, int s )
{
  setHour( h );
  setMinute( m );
  setSecond( s );
}

// 
// These functions validate the input. Note the use of the "trinary" operator
// '?' It is a form of if-statement. If the expression is TRUE, the first value
// on the left replaces the statement and if FALSE, the value after the colon
// (:) replaces the statement. 
//
void Time::setHour( int h )
{
  hour = ( h >= 0 && h < 24 ) ? h : 0;
}

void Time::setMinute( int m )
{
  minute = ( m >= 0 && m < 60 ) ? m : 0;
}

void Time::setSecond( int s )
{
  second = ( s >= 0 && s < 60 ) ? s : 0;
}

//
// These just return the values stored in the private variables. 
//
int Time::getHour()
{
  return hour;
}

int Time::getMinute()
{
  return minute;
}

int Time::getSecond()
{
  return second;
}

//
// Ouput functions
//

void Time::printUniversal()
{
  cout << setfill( '0' ) << setw( 2 ) << hour << ":"
    << setw( 2 ) << minute << ":" << setw(2) << second;
}

void Time::printStandard()
{
  cout << (( hour == 0 || hour == 12) ? 12 : hour % 12 )
    << ":" << setfill( '0' ) << setw( 2 ) << minute
    << ":" << setw(2) << second
    << ( hour < 12 ? " AM" : " PM" );
}

