//Lab11.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 11
// 07 Apr 2025

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include<cstring>

int main() 
{
  char string[256] = "";

  while (strlen(string) == 0)
  {
    cout << "Please enter a string" << endl;
    cin >> string;
  } 

  cout << "Echoing that string: ";
  for (size_t i = 0; i < strlen(string); ++i)
  {
    cout << string[i];
  }
  cout << endl;

  char sentence[257] = "";

  cout << "Please enter a sentence (less than 256 characters): " << endl;
  cin.ignore();
  cin.getline(sentence, 257);

  cout << "You entered " << strlen(sentence) << " characters. And " << cin.gcount() << " characters were removed from the stream." << endl;

  int position = -1;
  cout << "Please give me an integer (between 0 and " << (strlen(sentence) -1) << "): ";
  cin >> position;
  
  char original = sentence[position];

  sentence[position] = '\0';

  cout << "The sentence is now:" << endl;
  cout << sentence << endl;

  sentence[position] = original;

  cout << "The original is now:" <<endl;
  cout << sentence << endl;

  return 0;
}


