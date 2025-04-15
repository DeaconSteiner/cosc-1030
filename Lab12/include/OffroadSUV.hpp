//offroadSUV.hpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 12
// 14 Apr 2025

#ifndef OFFROADSUV_H
#define OFFROADSUV_H

#include "Auto.hpp"

#include<string>
using std::string;

class OffroadSUV : public Auto
{
  public:
    OffroadSUV(const string& mk = "Unknown", const string& ml = "Unknown", int d = 4, bool has4WD = true);

    // accessors 
    bool getHas4WD() const;
    void setHas4WD(bool val);
  
  private:
    bool has4WD;
};

#endif