// Lab14Funcs.cpp
// Deacon Steiner
// COSC1030, Section 12
// Lab 14
// Definitions for functions

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;

#include <iomanip>
using std::setfill;
using std::setw;

#include <limits>
using std::numeric_limits;
using std::streamsize;

#include "Lab14Funcs.hpp"

// This function is used to prompt the user for
// the nurse's name and nothing else
void getNurse(string &dnurse)
{
  cout << "Enter nurse's name:  ";
  getline(cin, dnurse);
}

// This function is used to prompt the user for
// the patient's name and nothing else
void getPatient(string &dpatient)
{
  cout << "Enter patient's name:  ";
  getline(cin, dpatient);
}

// This function is used to prompt the user for
// Pulse rate and nothing else.
void getPulse(int &dpulse)
{
  cout << "Enter pulse rate:  ";
  while (!(cin >> dpulse) || dpulse <= 0)
  {
    cout << "Invalid input. Please enter a positve number for pulse: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// This function is used to prompt the user for
// BP and nothing else.
void getBP(int &dsyst, int &ddiast)
{
  cout << "Enter systolic BP:  ";
  while (!(cin >> dsyst) || dsyst <= 0)
  {
    cout << "Invalid input. Enter a positive number for systolic BP: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  cout << "Enter diastolic BP:  ";
  while (!(cin >> ddiast) || ddiast <= 0)
  {
    cout << "Invalid input. Enter a positive number for diastolic BP: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// This function only formats and displays its arguments
// and nothing else.
void displayRecord(string &dpatient, string &dnurse, int dpulse, int dsyst,
                   int diast)
{
  cout << setfill('*') << setw(40) << "*" << endl;
  cout << "*  " << "Patient:  " << dpatient << endl;
  cout << "*  " << "Nurse:    " << dnurse << endl;
  cout << "*  " << "Pulse:    " << dpulse << endl;
  cout << "*  " << "BP:       " << dsyst << "/" << diast << endl;
  cout << setfill('*') << setw(40) << "*" << endl;
}
