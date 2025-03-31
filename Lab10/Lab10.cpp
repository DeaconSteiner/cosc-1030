//Lab10.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 10
// 31 Mar 2025

#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<limits>

using std::ifstream;
using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;

string promptUser(void);
void readData(vector<int>&, ifstream&);
int getMin(vector<int>&);
int getMax(vector<int>&);
float getAvg(vector<int>&);

int main() {
  ifstream inFile;
  string fileName = promptUser();
  
  inFile.open(fileName.c_str());

  if (!inFile.is_open()) {
    cerr << "Could not open: " << fileName << endl;
            inFile.clear();
            return 1;
  } else {
    vector<int> data;
    readData(data, inFile);
    inFile.close();
  
    cout << "The minimum value is " << getMin(data) << ", " << " The maximum is " << getMax(data) << ", " << " and the average is " << getAvg(data) << endl; 
  }

  return 0;
}

string promptUser() {
  string fileName;
  cout << "Please enter a filename: ";
  cin >> fileName;

  return fileName;
}

void readData(vector<int>& data, ifstream& inFile) {
  int num;
  while (inFile >> num)
  {
    data.push_back(num);
  }
}

int getMin(vector<int>& data) {
  int minVal = std::numeric_limits<int>::max();
  for (int num : data) {
    if (num < minVal) minVal = num;
  }
  return minVal;
}

int getMax(vector<int>& data) {
  int maxVal = std::numeric_limits<int>::min();
  for (int num : data) {
    if (num > maxVal) maxVal = num;
  }
  return maxVal;
}

float getAvg(vector<int>& data) {
  if (data.empty()) return 0;

  int sum = 0;
  for (int num : data) sum += num;
  return static_cast<double>(sum) / data.size();
}