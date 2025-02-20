// DoTable.cpp
// Kim Buckner
// COSC 1030
// Lecture 08
//
// Continuation of the DoWhile.cpp program,
// this time we input a range of integers over which
// a table of the n 1/n sum terms are displayed.
// The ternary logic operator ?: is also demonstrated here,
// along with extensive use of iomanip output stream formatting.

#include <iostream>  // For use of cout and cin and endl
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>  // To access cout formatting settings
using std::setprecision;
using std::setfill;
using std::setw;
using std::ios;

#include <climits>  // To obtain numerical precision constants.
#include <cfloat>
      // INT_MAX describes max int value.
      // FLT_DIG describes max decimal digits in float.
// Compute, based upon number of digits described by compiler
// as the limits of float precision, the table column widths.

const  int  TAB_SIZE(6); // Length of various tab width fields.
const  int  FLOAT_PREC(FLT_DIG+2);   // Precision in digits past decimal.
const  int  FLOAT_SIZE(FLOAT_PREC+2+3); // 2 leading chars, 3 following.
const  int  LINE_SIZE(5*TAB_SIZE+2*FLOAT_SIZE+4); //Full line width.

#include <string>
using std::string; // 'string' object to pass prompts to function

int   promptForLimitedInteger(int lowLimit, string Msg);
void  displayTableTop(void);
float sumUpRecips(int n);
void  displayResultsLine(int n, float sum);
void  displayTableBot(void);

//
// Main program --
// Cause the user to prompted for two integers, first greater than 0
// second greater than first. 
// Iterate from min to max values, displaying results of
// of sum of reciprocals in tabular format.
//
int main()
{
  int  min_n;  // Minimum positive integer to use.
  int  max_n;  // Maximum positive integer to use.
  float  sum;  // Holder for sum of reciprocals.

  min_n = promptForLimitedInteger(0,
      "Enter the smallest positive integer to use");
  max_n = promptForLimitedInteger(min_n,
      "Enter the largest positive integer");
  displayTableTop();
  // For each positive integer in the requested range, compute and
  // display the corresponding line.
  for (int i=min_n; i<=max_n; i++)
  {
    sum = sumUpRecips(i);
    displayResultsLine(i, sum);
  }
  displayTableBot();
  return 0;
}

//
// gets a values larger than the 'starting' value
// passed as "lowLimit"
//

int  promptForLimitedInteger(int lowLimit, string msg) 
{
  int  tmp;
  // Filter input to obtain an integer greater than spec'd limit.
  do {
    cout << msg << " (greater than " << lowLimit << "):  ";
    cin  >> tmp;
  } while ( tmp <= lowLimit );

  cout << endl;
  return  tmp;
}

//
// Display the column header titles.
//
void  displayTableTop(void) 
{
  cout << setfill('+') << setw(LINE_SIZE) << "+" << endl;
  cout << setfill(' ') << setw(TAB_SIZE) << "n" 
    << setw(TAB_SIZE) << " "
    << setw(FLOAT_SIZE) << "Recip (1/n)"
    << setw(TAB_SIZE) << " "
    << setw(FLOAT_SIZE) << "Sum 1/n n*"
    << setw(TAB_SIZE) << " "
    << setw(TAB_SIZE+4) << "CMP 1" << endl;
  cout << setfill('+') << setw(LINE_SIZE) << "+" << endl;
  return;
}

//
// compute the sum of the reciprocals from 1 to input value
// Should be 1.00000000 but precision is lost quickly
//

float  sumUpRecips(int n) 
{
  float  sum(0), recip;
  recip = 1/(static_cast<float>(n));
  for (int i=1; i<=n; i++)
  {
    sum+=recip;
  }
  return sum;
}

//
// format and display computed values
//
void  displayResultsLine(int n, float sum) {
  // Display data line for table, assumes that sum contains the
  // computed sum of n reciprocals of n.
  float  recip(1/static_cast<float>(n));
  cout.setf( ios::scientific, ios::floatfield);
  cout << setfill(' ') << setw(TAB_SIZE) << n
    << setw(TAB_SIZE) << " "
    << setprecision(FLOAT_PREC) << recip
    << setw(TAB_SIZE) << " "
    << setprecision(FLOAT_PREC) << sum
    << setw(TAB_SIZE) << " "
    << setw(TAB_SIZE) 
    << (sum>1 ? ">" : (sum<1 ? "<" : "==")) << endl;
  return;
}

//
// displays the table footer and some additional info.
//
void  displayTableBot(void) {
  // Display bottom line of table and footnote about precision
  // reported by compiler limits.
  cout << setfill('+') << setw(LINE_SIZE) << "+" << endl;
  cout << "This C++ compiler reports " << FLT_DIG
    << " decimal digits for float precision numbers,\n";
  cout << "also the maximum positive int integer is " << INT_MAX <<
    "\n"<< endl;
  return;
}
