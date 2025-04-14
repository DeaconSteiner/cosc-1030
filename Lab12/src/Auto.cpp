// Auto.cpp
// Instructor supplied
// COSC 1030
// Lab 12, Base Class for assignment
//
//

#include "Auto.hpp"


Auto::Auto()
{
  doors=2;
}

Auto::Auto(const char* mk, const char* ml, int d)
{
  setMake(mk);
  setModel(ml);
  setDoors(d);
  return;
}

Auto::Auto(const string& mk, const string& ml, int d)
{
  // have to use the .c_str() function because of the 
  // definitions of setMake and setModel. Of course you
  // could overload those two functions and this 
  // would not be an issue.
  setMake(mk.c_str());
  setModel(ml.c_str());
  setDoors(d);
  return;
}

void Auto::setDoors(int d)
{
  if(d>0)
    doors=d;
  else 
    doors=2;
  return;
}

int Auto::getDoors(void) const
{
  return doors;
}

const char *Auto::getMake(void) const
{
  return make.c_str();
}

const char *Auto::getModel(void) const
{
  return model.c_str();
}

/*
 * These two functions allow the programmer to type in a name like
 * obj.setMake("Studebaker"); Otherwise, if they took references to strings
 * would have to create a string to pass and do something like
 *
 * string tmp("Studebaker");
 * obj.setMake(tmp);
 */
void Auto::setMake(const char *mk)
{
  if(mk!=0)
    make=mk;
  else 
    make.clear();// make sure the string object is empty
  return;
}

void Auto::setModel(const char *ml)
{
  if(ml!=0)
    model=ml;
  else 
    model.clear();// make sure the string object is empty
  return;
}

