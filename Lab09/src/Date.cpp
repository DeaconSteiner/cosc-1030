// Date.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 09
// Mar 26, 2025

// Member-function definitions for class Date.

#include "Date.hpp"

// Constructor: the defaults (in the header ONLY) allow a usage like Time()
// that is, I can use a 'no values' or 'default' constructor.
// The defaults are NOT USED HERE!!!!!
Date::Date(int y, int m, int d)
{
  setDate(y, m, d);
}

// The accessor functions
void Date::setDate(int y, int m, int d)
{
  setYear(y);
  setMonth(m);
  setDay(d);
}

// These functions validate the input. Note the use of the "trinary" operator
// '?' It is a form of if-statement. If the expression is TRUE, the first value
// on the left replaces the statement and if FALSE, the value after the colon
// (:) replaces the statement. 
void Date::setYear(int y)
{
  year = (y >= 0 && y <= 2999) ? y : 0;
}

void Date::setMonth(int m)
{
  month = (m >= 1 && m <= 12) ? m : 1;
}

void Date::setDay(int d)
{
  day = (d >= 1 && d <= 31) ? d : 1;
}

// These just return the values stored in the private variables. 
int Date::getYear()
{
  return year;
}

int Date::getMonth()
{
  return month;
}

int Date::getDay()
{
  return day;
}

// Ouput functions
void Date::printUniversal()
{
  cout << setfill('0') << setw(4) << year << "/" << setw(2) << month << "/" << setw(2) << day;
}

void Date::printStandard()
{
  cout << setfill('0') << setw(2) << month << "/" << setw(2) << day << "/" << setw(4) << year;
}