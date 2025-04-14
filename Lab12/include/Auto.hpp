// Auto.h
// Instructor Supplied
// COSC 1030
// Lab 12, Base Class for assignment
//
//

#ifndef AUTO_H
#define AUTO_H
#include<string>
using std::string;

class Auto
{
  public:
    Auto();
    Auto(const char* mk, const char* ml, int d);
    Auto(const string& mk, const string& ml, int d);
    void setDoors(int d);
    int getDoors(void) const;
    const char *getMake(void) const; 
    const char *getModel(void) const;
    void setMake(const char *mk);
    void setModel(const char *ml);
  private:
    int doors;
    string make;
    string model;
};

#endif
