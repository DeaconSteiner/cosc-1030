// Prog06.cpp
// Deacon Steiner
// COSC 1030 Spring 2025
// Program 06
// February 26, 2025

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "DWallVol.hpp"

int main()
{

    double h, d, t;
    
    do
    {
        cout << "Enter the height (cm) of the tank ( >= 0 ): ";
        cin >> h;
    } while (h < 0);

    do
    {
        cout << "Enter the diameter (cm) of the tank ( >= 0 ): ";
        cin >> d;
    } while (d < 0);

    double maxThickness;
    if (h/2 < d/2)
    {
        maxThickness = h/2;
    }
    else
    {
        maxThickness = d/2;
    }
    
    
    do
    {
        cout << "Enter the thickness (cm) of the tank wall ( 0 <= t <= " << maxThickness << " ): ";
        cin >> t;
    } while (t < 0 || t > maxThickness);

    double outer = outerVolume(h, d);
    double inner = innerVolume(h, d, t);
    double vTotal = tankWallVolume(outer, inner);
    
    cout << "A tank of height " << h << "cm and diameter " << d << "cm with a wall thickness of " << t << "cm has a total wall volume of " << vTotal << " cubic centimeters." << endl;



    return 0;
}
