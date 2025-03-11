// Lab08.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 08
// Mar 11, 2025

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float ComputeCharges(float, float);
float ComputeCharges(int, float, float, float);

void DataInput(float &, float &);
void DataInput(int &, float &, float &, float &);

int main()
{
    char status;

    cout << "Charge computation for Inpatient (I) or Outpatient (O)" << endl;
    cin >> status;

    int days;
    float dRate;
    float medCharges;
    float servCharges;

    switch (toupper(status))
    {
        case 'O':
        {
            DataInput(medCharges, servCharges);
            float total = ComputeCharges(medCharges, servCharges);

            cout << "Total charges: $" << total << endl;
            break;
        }

        case 'I':
        {
            DataInput(days, dRate, medCharges, servCharges);
            float total = ComputeCharges(days, dRate, medCharges, servCharges);

            cout << "Total charges: $" << total << endl;
            break;
        }
        default:
        {
            cout << "Must use I for inpatient or O for outpatient (case insensitve)" << endl;
            return 1;
        }
    }
    return 0;
}

void DataInput(float &medCharge, float &servCharge)
{
    do 
    {
        cout << "Medicine charges: ";
        //cin >> medCharge;
    }
    while (!(cin >> medCharge) || medCharge < 0);
     
    do
    {
        cout << "Service charges: ";
    }
    while (!(cin >> servCharge) || servCharge < 0);
}

void DataInput(int &days, float &dRate, float &medCharge, float &servCharge)
{
    do
    {
        cout << "Number of days: ";
    } while (!(cin >> days) || days < 0);

    do
    {
        cout << "Daily rate: ";
    }
    while (!(cin >> dRate) || dRate < 0);
    
    do 
    {
        cout << "Medicine charges: ";
        //cin >> medCharge;
    }
    while (!(cin >> medCharge) || medCharge < 0);
     
    do
    {
        cout << "Service charges: ";
    }
    while (!(cin >> servCharge) || servCharge < 0);
}
    

float ComputeCharges(float medCharge, float servCharge)
{
    float totalCharges = medCharge + servCharge;
    return totalCharges;
}

float ComputeCharges(int days, float dRate, float medCharge, float servCharge)
{
    float stayCost = dRate * days;
    float totalCharges = stayCost + medCharge + servCharge;
    return totalCharges;
}
