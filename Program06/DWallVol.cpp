// DWallVol.cpp
// Deacon Steiner
// COSC 1030 Spring 2025
// Program 06
// February 26, 2025

#include<cmath>

const double PI = 4*atan(1.0);

double outerVolume(double h, double d) 
{
    double radius = d / 2;
    return h * (PI * radius * radius);
}

double innerVolume(double h, double d, double t) 
{
    double inner_radius = (d/2) - t;
    return h * (PI * inner_radius * inner_radius);
}

double tankWallVolume(double o, double i)
{
    return o - i;
}


