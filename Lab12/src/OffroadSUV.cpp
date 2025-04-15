//offroadSUV.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 12
// 14 Apr 2025

#include "OffroadSUV.hpp"

OffroadSUV::OffroadSUV(const string& mk, const string& ml, int d, bool has4WD) : Auto(mk, ml, d), has4WD(has4WD) {}

bool OffroadSUV::getHas4WD() const
{
  return has4WD;
}

void OffroadSUV::setHas4WD(bool val)
{
  has4WD = val;
}