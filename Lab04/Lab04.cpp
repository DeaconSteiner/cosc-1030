// Lab04.cpp
// Deacon Steiner
// COSC 1030
// Lab 04
// Feb 12, 2025
// Compute several exercise related heart rate
//    targets based upon age and resting heart rate.
// Reference: see HRmax, HRR and THR on
//    http://en.wikipedia.org/wiki/Heart_rate

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void DisplayIntroduction(void);
int PromptForAge(void);
int PromptForHRrest(void);
double ComputeHRmax(int age);
double ComputeHRR(double HRMax, int HRrest);
double ComputeTHR85(int age, double HRrest, double HRR);
void DisplayResults(int HRMax, int HRR, int THR85);

int main()
{
  int age, HRrest;
  double HRmax, HRR, THR85;
  DisplayIntroduction();
  age = PromptForAge();
  HRrest = PromptForHRrest();
  HRmax = ComputeHRmax(age);
  HRR = ComputeHRR(HRmax, HRrest);
  THR85 = ComputeTHR85(age, HRrest, HRR);
  DisplayResults(HRmax, HRR, THR85);
  return 0;
}

// Stubby implementations here.
// These need lots of work!
void DisplayIntroduction(void) {
  cout << "===================================================" << endl;
  cout << "Given your age and resting heart rate, \n"
          "I'll compute some exercise heart rate information for you." << endl;
  cout << "===================================================" << endl;
  return;
}

int PromptForAge(void) {
  int age;
  cout << "Enter your age in whole years (>0): ";
  cin >> age;
  
  while (age < 1)
  {
    cout << "Age must be greater than 0, Please try again: ";
    cin >> age;
  }
   return age; 
}

int PromptForHRrest(void) { 
  double HRrest;
  cout << "Enter your resting heart rate (>0): ";
  cin >> HRrest;
  
  while (HRrest < 1)
  {
    cout << "Resting heart rate must be greater than 0, Please try again: ";
    cin >> HRrest;
  }
  return HRrest; 
}

double ComputeHRmax(int age) { 
  double HRMax = 205.8-(0.685* age);
  return HRMax; 
}

double ComputeHRR(double HRMax, int HRrest) {
  double HRR = HRMax - HRrest;
   return HRR; 
}

double ComputeTHR85(int age, double HRrest, double HRR) {
  double THR85 = ((HRR * 0.85) + HRrest);

   return THR85; }

void DisplayResults(int HRMax, int HRR, int THR85) {
  cout << "====================RESULTS========================" << endl;
  cout << "Your recommended safe heart rate max is " << static_cast<int>(HRMax) << " beats per minute." << endl;
  cout << "Your heart rate reserve is " << static_cast<int>(HRR) << " beats per minute." <<endl;
  cout << "And, your 85% intensity heart rate target is " << static_cast<int>(THR85) << " beats per minute." <<endl;
   return; }
