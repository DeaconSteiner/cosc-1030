// Prog09.cpp
// COSC 1030
// Kim Buckner
// Program 9
// Compute the linear least square line fit
// for a set of x-y data pairs.

#include <iostream>
using std::cout;
using std::endl;

#include "Params.hpp"

#include "DisplayArray.hpp"

int main()
{
  double xData[]={1.0, 3.0, 4.0, 6.0, 7.0, 10.0, 12.0};
  double yData[]={2.0, 5.0, 6.0, 9.0, 11.0, 13.0, 15.0};

  int dataSize=7;

  double m, b;

  LLParams(xData,yData,dataSize,m,b);

  cout << "The x data set: " << endl;
  DisplayArray(xData, dataSize);
  cout << endl;

  cout << "the y data set: " << endl;
  DisplayArray(yData, dataSize);
  cout << endl;

  cout << "The linear least square parameters are as follows:" << endl;
  cout << "  m = " << m << endl;
  cout << "  b = " << b << endl;

  return 0;
}
