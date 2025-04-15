//deliveryVan.hpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 12
// 14 Apr 2025

#ifndef DELIVERYVAN_H
#define DELIVERYVAN_H

#include "OffroadSUV.hpp"

#include<string>
using std::string;

class DeliveryVan : public OffroadSUV
{
  public:
    DeliveryVan(const string& mk = "Unknown", const string& ml = "Unknown", int d = 3, bool has4WD = false, int payloadCapacity = 1500);

    // accessors
    int getPayloadCapacity() const;
    void setPayloadCapacity(int val);

  private:
    int payloadCapacity;
};

#endif