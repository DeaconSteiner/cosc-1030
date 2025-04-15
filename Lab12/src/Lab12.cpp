//Lab12.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 12
// 14 Apr 2025

#include <iostream>
#include "OffroadSUV.hpp"
#include "DeliveryVan.hpp"

using namespace std;

int main()
{
  //============================================================================

  OffroadSUV suv1;
  cout << "SUV 1 - Make: " << suv1.getMake() << ", Model: " << suv1.getModel() << ", Doors: " << suv1.getDoors() << ", 4WD: " << (suv1.getHas4WD() ? "Yes" : "No") << endl;

  //----------------------------------------------------------------------------

  OffroadSUV suv2("Jeep", "Wrangler", 2, true);
  cout << "SUV 2 - Make: " << suv2.getMake() << ", Model: " << suv2.getModel() << ", Doors: " << suv2.getDoors() << ", 4WD: " << (suv2.getHas4WD() ? "Yes" : "No") << endl;

  //----------------------------------------------------------------------------

  suv1.setHas4WD(false);
  cout << "SUV 1 after setHas4WD(false) - 4WD: " << (suv1.getHas4WD() ? "Yes" : "No") << endl;

  //============================================================================

  DeliveryVan van1;
  cout << "Van 1 - Make: " << van1.getMake() << ", Model: " << van1.getModel() << ", Doors: " << van1.getDoors() << ", 4WD: " << (van1.getHas4WD() ? "Yes" : "No") << ", payload capacity: " << van1.getPayloadCapacity() << endl;

  //----------------------------------------------------------------------------

  DeliveryVan van2 ("Mercedes-Benz", "Sprinter 2500", 4, true, 3396);
  cout << "Van 2 - Make: " << van2.getMake() << ", Model: " << van2.getModel() << ", Doors: " << van2.getDoors() << ", 4WD: " << (van2.getHas4WD() ? "Yes" : "No") << ", payload capacity: " << van2.getPayloadCapacity() << endl;

  van2.setHas4WD(false);
  cout << "Van 2 after setHas4WD(false) - 4WD: " << (van2.getHas4WD() ? "Yes" : "No") << endl;

  //----------------------------------------------------------------------------

  van2.setPayloadCapacity(3627);
  cout << "Van 2 after setPayloadCapacity(3627) - Payload Capacity: " << van2.getPayloadCapacity() << endl;

  //----------------------------------------------------------------------------

  cout << "Testing error handling with negative payload" << endl;
  DeliveryVan van3;
  van3.setPayloadCapacity(-3000);
  cout << "Van 3 Payload: " << van3.getPayloadCapacity() << endl;

  return 0;
}