// Prog14.cpp
// Deacon Steiner
// COSC1030, Section 12
// Program 14
//
// This is a skeleton for you start from.
// Get a filename from the user.
// Open the file and
//   read a list of integer data from the file.
// Display the number of values, arithmetic mean and median of
// the list on the standard output.  Input data are assumed to
// always be valid (that means all integers).
//
// NOTE: the file you are reading from should in the directory
// that contains the ".sln" file for your project.  At least
// that is where I got it to work.

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;

#include<algorithm>
using std::sort;
/*
 * You have two choices here. Either turn these into prototypes and
 * complete the function definitions after main() or just put in the CORRECT
 * code here. What you see is a set of stubs that will compile and run. It just
 * does  not do anything. But you can fill these in one at a time,
 * AND TEST THEM, to complete the program.
 */

string PromptUser()
{
  string filename;
  cout << "Please enter the name of a file containing integers. \n We'll return the number of integers, mean and median." <<endl;
  getline(cin, filename);
  return filename;
}

int ReadData(vector<int> &theData, ifstream &in)
{
  // returns 0 if everything went well.
  // returns 1 if the file was not open
  int num;
  if (in.is_open())
  {
    while (in >> num)
    {
      theData.push_back(num);
    }
    return 0;
  }
  else {return 1;}
}

void ComputeStats(vector<int> &theData, double &mean, double &median)
{
  // Compute mean
  int sum = 0;
  for (size_t i = 0; i < theData.size(); i++)
  {
    sum += theData[i];
  }

  mean = static_cast<double>(sum) / theData.size();

  // Sort the data
  sort(theData.begin(), theData.end());
  

  // Compute median
  if (theData.size() % 2 != 0)
  {
    median = static_cast<double>(theData[theData.size() / 2]);
  }
  else{
    median = (static_cast<double>(theData[(theData.size() - 1) / 2]) + static_cast<double>(theData[theData.size() / 2])) / 2.0;
  }
}

void DisplayStats(int num, double mean, double median)
{
  cout << "Number of values: " << num << endl;
  cout << "Mean value: " << mean <<  endl;
  cout << "Median value: " << median << endl;
  return;
}

int main()
{
  vector<int> theData;
  string filename;
  ifstream infile;

  /*
   * Get the filename
   */
  filename = PromptUser();
  /*
   * Now you have to open the file.
   * If the filename is bad (file will not open)
   * reset the ifstream with ifstream.clear().
   * Prompt the user (with the function we just used) again and
   * repeat until the input file is opened.
   *
   */
  infile.open(filename);

  while (!infile.is_open())
  {
    cout << "File could not be opened, please try again." << endl;
    infile.clear();
    filename = PromptUser();
    infile.open(filename);
  }

  /*
   * Now that the file is open, read the data
   */

  int rtn = ReadData(theData, infile);

  /*
   * ReadData() needs to make sure the file is actually open
   * before it tries to read from it. Strongly suggest you
   * use the is_open() for this, not good() or bad().
   *
   * Check the return value from ReadData(). This is a deduction
   * if you do not check the return value.
   * If it is 1, the file was not open so
   * give the user a message and end the program.
   * Do NOT use the exit() function, just return from main()
   */
  if (rtn == 1 || theData.empty())
  {
    cout << "Failed to read data from the file or the file is empty." << endl;
    return 1;
  }
  /*
   * Now close the input file. Done with it. This is a deduction
   * if you do not close the file.
   */

  infile.close();

  int numValues = theData.size();
  double meanValue, medianValue;

  ComputeStats(theData, meanValue, medianValue);

  DisplayStats(numValues, meanValue, medianValue);

  return 0;
}
