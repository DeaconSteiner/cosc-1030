// Polynomial.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 10
// 03 Apr 2025

#include "Polynomial.hpp"
#include <iostream>
#include <vector>
#include <iomanip>

using std::istream;
using std::ostream;
using std::vector;

Polynomial::Polynomial() : coeffs(1, 0.0), degree(0) {}

Polynomial::Polynomial(int deg, const vector<double> &coefficients)
    : coeffs(coefficients), degree(deg)
{
  if (coefficients.size() != static_cast<size_t>(degree + 1))
  {
    throw std::invalid_argument("Number of coefficients does not match degree+1.");
  }
}

Polynomial::Polynomial(const Polynomial &other) : coeffs(other.coeffs), degree(other.degree) {}

Polynomial::~Polynomial() {}

const Polynomial &Polynomial::operator=(const Polynomial &other)
{
  if (this != &other)
  {
    degree = other.degree;
    coeffs = other.coeffs;
  }
  return *this;
}

bool Polynomial::operator==(const Polynomial &other) const
{
  return degree == other.degree && coeffs == other.coeffs;
}

double Polynomial::operator[](int index) const
{
  if (index < 0 || index > degree)
  {
    throw std::out_of_range("Index out of bounds");
  }
  return coeffs[index];
}

double &Polynomial::operator[](int index)
{
  if (index < 0 || index > degree)
  {
    throw std::out_of_range("Index out of bounds");
  }
  return coeffs[index];
}

int Polynomial::getDegree() const
{
  return degree;
}

void Polynomial::printPolynomial() const
{
  if (degree == 0 && coeffs[0] == 0)
  {
    std::cout << "empty";
    return;
  }

  bool firstTerm = true; // Flag to handle "+" sign properly
  for (int i = 0; i <= degree; ++i)
  { // Loop from lowest degree (0) to highest degree
    if (coeffs[i] != 0.0 || i == degree)
    { // Print even if coefficient is zero for the last term
      if (!firstTerm)
      {
        std::cout << (coeffs[i] >= 0 ? " + " : " "); // Correctly handle sign
      }
      firstTerm = false;

      std::cout << coeffs[i]; // Print the coefficient

      if (i < degree)
      {
        std::cout << "x^(" << degree - i << ")"; // Print the degree part
      }
    }
  }
}

ostream &operator<<(ostream &out, const Polynomial &p)
{
  if (p.getDegree() == 0 && p[0] == 0)
  {
    out << "empty";
    return out;
  }

  bool firstTerm = true; // Flag to handle "+" sign properly
  for (int i = 0; i <= p.getDegree(); ++i)
  { // Loop from highest degree to lowest
    if (p[i] != 0.0 || i == p.getDegree())
    { // Print even if coefficient is zero (for the last term)
      if (!firstTerm)
      {
        out << (p[i] >= 0 ? " + " : " "); // Correctly handle sign
      }
      firstTerm = false;

      out << p[i]; // Print the coefficient

      if (i < p.getDegree())
      {
        out << "x^(" << p.getDegree() - i << ")"; // Print the degree part
      }
    }
  }
  return out;
}

istream &operator>>(istream &in, Polynomial &p)
{
  int degree;
  in >> degree;

  vector<double> coeffs(degree + 1);
  for (int i = 0; i <= degree; ++i)
  {
    in >> coeffs[i];
  }

  p = Polynomial(degree, coeffs);
  return in;
}
