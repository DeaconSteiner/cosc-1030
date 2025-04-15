//deliveryVan.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 12
// 14 Apr 2025

#include "DeliveryVan.hpp"

DeliveryVan::DeliveryVan(const string& mk, const string& ml, int d, bool has4WD, int payloadCapacity) : OffroadSUV(mk, ml, d, has4WD), payloadCapacity(payloadCapacity) {}

int DeliveryVan::getPayloadCapacity() const
{
  return payloadCapacity;
}

void DeliveryVan::setPayloadCapacity(int val)
{
  if (val < 0)
  {
    payloadCapacity = 0;
  }
  else
  {
    payloadCapacity = val;
  }
}