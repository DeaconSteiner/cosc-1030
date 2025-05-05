// Lab14.cpp
// Deacon Steiner
// COSC1030, Section 12
// Lab 14
// Main program 

// Purpose:  prompt for patient record information, display label summary.

#include "Lab14Funcs.hpp"

int main()
{
  string patient;
  string nurse;
  int  pulse, systolic, diastolic;

  getNurse(nurse);
  getPatient(patient);
  getPulse(pulse);
  getBP(systolic,diastolic);

  displayRecord(patient,nurse,pulse,systolic,diastolic);

  return 0;
}
