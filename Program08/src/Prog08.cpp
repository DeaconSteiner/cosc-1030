// Prog08.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 08
// 10 Mar 2025

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

  cout << "Execution time for Fibonacci implementions\n";
  cout << "             (ms min --- ms max)             \n";
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
