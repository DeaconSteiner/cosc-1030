// TestingFiboChrono.cpp
// Nels Frazier
// COSC 1030
// Lecture 13
// Demonstration of the use of a std::chrono steady_clock for
// getting a rough measurement comparison on execution time
// of a recursive and an iterative computation of Fibonacci.

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;

#include <chrono>
using std::chrono::steady_clock;

#include "FiboImps.hpp"

const int MAXN(45);

int main()
{

  steady_clock::time_point before, after;
  std::chrono::duration<double> elapsed;
  unsigned long int diff, result;

  cout << "Execution time for Fibonacci no. implementions (ms)\n";
  cout << setfill('+') << setw(64) << "+" << endl << setfill(' ');
  cout << setw(4) << "n" << setw(30) << "Recursive"
    << setw(30) << "Iterative" << endl;
  cout << setfill('+') << setw(64) << "+" << endl << setfill(' ');
  for (int n=0; n<=MAXN; n++) {
    cout << setw(4) << n;

    before = std::chrono::steady_clock::now();
    result=FiboRecursive(n);
    after = std::chrono::steady_clock::now();

    elapsed = after - before;
    cout << setw(20) << result << setw(10) << elapsed.count();

    before = std::chrono::steady_clock::now();
    result=FiboIterative(n);
    after = std::chrono::steady_clock::now();

    elapsed = after - before;
    cout << setw(20) << result << setw(10) << elapsed.count();
    cout << endl;
  }
  return 0;
}
  
