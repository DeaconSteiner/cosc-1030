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

const int MAXN(40);
const int REPEATS(6);

int main()
{

  steady_clock::time_point before, after;
  std::chrono::duration<double> elapsed, min, max;
  unsigned long int result;

  cout << "Execution time for Fibonacci implementions\n";
  cout << "             (ms min --- ms max)             \n";
  cout << setfill('+') << setw(135) << "+" << endl << setfill(' ');
  cout << setw(4) << "n" << setw(30) << "Recursive"
    << setw(70) << "Iterative" << endl;
  cout << setfill('+') << setw(135) << "+" << endl << setfill(' ');
  for (int n=0; n<=MAXN; n++) 
  {
    cout << setw(4) << n;

    // For loop using REPEATS

    min = std::chrono::duration<double>::max();
    max = std::chrono::duration<double>::min();
    for (int i = 0; i < REPEATS; i++)
    {
      before = std::chrono::steady_clock::now();
      result=FiboRecursive(n);
      after = std::chrono::steady_clock::now();

      elapsed = after - before;

      if (elapsed <= min)
      {
        min = elapsed;
      }

      if (elapsed >= max)
      {
        max = elapsed;
      }
    }
    
    cout << setw(20) << result << setw(10) << "(" << setw(15) << min.count() << " --- " << setw(15) << max.count() << ")";

    // For loop using REPEATS

    min = std::chrono::duration<double>::max();
    max = std::chrono::duration<double>::min();
    for ( int i = 0; i < REPEATS; i++)
    {
      before = std::chrono::steady_clock::now();
      result=FiboIterative(n);
      after = std::chrono::steady_clock::now();

      elapsed = after - before;

      if (elapsed <= min)
      {
        min = elapsed;
      }

      if (elapsed >= max)
      {
        max = elapsed;
      }
    }
    cout << setw(30) << result << setw(10) << "(" << setw(10) << min.count() << " --- " << setw(10) << max.count() << ")" << endl;
  }
  return 0;
}
