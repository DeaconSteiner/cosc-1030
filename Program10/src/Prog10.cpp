// Prog10.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 10
// 03 Apr 2025

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Polynomial.hpp"

int main()
{
  Polynomial A;
  cout << "(1) Testing `cout << A':  " << A << endl;

  cout << "(2) Testing `cin >> A':\n";
  cout << "Enter the polynomial (integer order then double coefficients):\n\t ";
  cin >> A;
  cout << endl;
  cout << "(3) Second look at A:  " << A << endl;

  Polynomial B(A);
  cout << "(4) Testing `Polynomial B(A)':  " << B << endl;

  vector<double> clist;
  clist.push_back(8); 
  clist.push_back(4.5); 
  clist.push_back(1);
  Polynomial C(2, clist);
  cout << "(5) Testing `Polynomial C(2, clist)':  " << C << endl;

  Polynomial D=C;
  cout << "(6) Testing D = C:  " << D << endl;

  cout << "(7) Testing A == B :  " << (A==B ? "TRUE" : "FALSE") << endl;
  cout << "(8) Testing A == D :  " << (A==D ? "TRUE" : "FALSE") << endl;

  try
  {
    cout << "(9) Testing out-of-bounds access: " << A[10] << endl;
  }
  catch(const std::out_of_range& e)
  {
    std::cerr << e.what() << '\n';
  }

  vector<double> higherDegCoeffs = {1.5, -2.3, 0.8, 4.0};
  Polynomial F(3, higherDegCoeffs);
  cout << "(10) Testing high-degree polynomial 'F': " << F << endl;

  return 0;
}

