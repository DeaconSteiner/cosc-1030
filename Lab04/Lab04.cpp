// Lab04.cpp
// Deacon Steiner
// COSC 1030
// Lab 04
// Feb 12, 2025
// Compute several exercise related heart rate 
//    targets based upon age and resting heart rate.
// Reference: see HRmax, HRR and THR on 
//    http://en.wikipedia.org/wiki/Heart_rate

void  DisplayIntroduction(void);
int   PromptForAge(void);
int   PromptForHRrest(void);
int   ComputeHRmax(int age);
int   ComputeHRR(int age, int HRrest);
int   ComputeTHR85(int age, int HRrest);
void  DisplayResults(int HRMax, int HRR, int THR85);

int main()
{
  int age, HRrest;
  int HRmax, HRR, THR85;
  DisplayIntroduction();
  age = PromptForAge();
  HRrest = PromptForHRrest();
  HRmax = ComputeHRmax(age);
  HRR = ComputeHRR(age, HRrest);
  THR85 = ComputeTHR85(age, HRrest);
  DisplayResults(HRmax, HRR, THR85);
  return 0;
}

// Stubby implementations here. 
// These need lots of work!
void  DisplayIntroduction(void) {return; }
int   PromptForAge(void) {return 1;}
int   PromptForHRrest(void) {return 1;}
int   ComputeHRmax(int age) {return 1;}
int   ComputeHRR(int age, int HRrest) {return 1;}
int   ComputeTHR85(int age, int HRrest) {return 1;}
void  DisplayResults(int HRMax, int HRR, int THR85) {return;}

