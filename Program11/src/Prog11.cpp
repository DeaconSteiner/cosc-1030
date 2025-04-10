// Prog11.cpp
// Kim Buckner
// COSC 1030
// Program 11
// Testing program for the String1030 class.
#include<iostream>
#include "String1030.hpp"

using std::cout;
using std::cin;

int main()
{
  cout << "\n\tChecking the use of the constructors \n";

  String1030 s("My string");
  String1030 t(s);
  String1030 x;

  char in_buf[256];


  cout << "S size(): " << s.getSize() << endl;
  cout << "T size(): " << t.getSize() << endl;
  cout << "X size(): " << x.getSize() << endl;

  cout << "\n\tTesting [] on 'T'\n";
  for(int i=0;i<t.getSize();i++){
    cout << t[i];
  }
  cout << endl;

  cout << "\n\tChecking the ability to modify one element of the string\n";
  s[2]='5';

  for(int i=0;i<s.getSize();i++) {
    cout << s[i];
  }
  cout << endl;

  cout << "\n\tChecking the assignment operator: X=S\n";
  x=s;
  cout << "X: " << x.getString() << endl;

  cout << "\n\tChecking the size reset (30).\n";
  x.setSize(30);
  cout << "X size is now: " << x.getSize() << endl;



  cout << "\n\tChecking setString() and getString().\n";
  cout << "Input a string: ";
  cin >> in_buf;
  x.setString(in_buf);
  cout <<  "\nX: " << x.getString() << endl;


  //more checks on resize

  cout << "\n\tSet to a negative value, nothing should change\n";
  cout << "S size() before: " << s.getSize() << endl;
  s.setSize(-8);
  cout << "S size() after : " << s.getSize() << endl;

  cout << "\n\tSet to 0, should be 0\n";
  s.setSize(0);
  cout << "S size(): " << s.getSize() << "\n" << endl;

  //read into the 0 length array should NOT have an error
  //and should NOT transfer any characters. Output should not
  //have any errors either.
  cout << "Input a string: ";
  cin >> in_buf;
  s.setString(in_buf);
  cout << "S after cin>>: " << s.getString() << endl;

  cout << "\n\tReset to something larger than 0\n" ;
  s.setSize(10);
  cout << "S size(): " << s.getSize() << endl;

  cout << "Input a string: ";
  cin >> in_buf;
  s.setString(in_buf);
  cout << "S after cin>>: " << s.getString() << endl;

  cout << "\n\tChecking the assignment return value with : X=T=S\n";

  x=t=s;

  cout << "T: " << t.getString() << endl;
  cout << "X: " << x.getString() << endl;


  return 0;

}

