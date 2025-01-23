// Prog01.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 01
// 23 Jan 2025

#include <iostream>

using std::cout;
using std:: cin;
using std::endl;

int main() {
    int n = 0;
    int sum = 0;

    cout << "Please enter four values (Seperated with a space)" << endl;
    cout << "The sum of ";

    while (n < 4)
    {
        int value = 0;
        cin >> value;

        sum += value;

        n++;
    }

    cout << "is: " << sum << endl;
    
}
