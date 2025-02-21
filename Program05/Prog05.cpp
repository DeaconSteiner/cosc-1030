// Prog05.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 05
// 20 Feb 2025

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

double valPrompt(void);
double myPower(int);
double myDenominator(int);

int main(){
    
    double max_k = valPrompt();
    double sum = 0;
    for (int i = 0; i <= max_k; i++)
    {
        sum += myPower(i) / myDenominator(i);
    }
    double pi = 4 * sum;

    cout << std::fixed << std::setprecision(15);
    cout << "Approximation of pi is " << pi << endl;   
    return 0;
}

double valPrompt(void) {
    double value;
    cout << "Please enter a non-negative integer: ";
    cin >> value;

    while (value < 0)
    {
        cout << "integer must be positive, Please enter another number: ";
        cin >> value;
    }
    return value;
}

double myPower(int k) {
    int product = 1;
    int counter = 0;
    if (k == 0)
    {
        return product;
    }
    
    do
    {
        product *= -1;
        counter++;
    } while (counter < k);
    return product;
}

double myDenominator(int k) {
    return (2*k)+1;
}
