// Polynomial.hpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 10
// 03 Apr 2025

#ifndef _POLY_H
#define _POLY_H

#include<iostream>
using std::ostream;
using std::istream;

#include<vector>
using std::vector;

class Polynomial
{

  public:
    Polynomial();
    Polynomial(int deg, const vector<double>& coefficients);
    Polynomial(const Polynomial& other);
    ~Polynomial();

    const Polynomial& operator=(const Polynomial& other);
    bool operator==(const Polynomial& other) const;
    double operator[](int index) const;
    double& operator[](int index);

    int getDegree() const;

    void printPolynomial() const;

    friend ostream& operator<<(ostream& out, const Polynomial& p);
    friend istream& operator>>(istream& in, Polynomial& p);

  private:
    vector<double> coeffs;
    int degree;
    
};

#endif
