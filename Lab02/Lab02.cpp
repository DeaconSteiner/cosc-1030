// Lab02.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 02
// 29 Jan 2025

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    
    cout << "Please enter a number between one and 4 (1-4)" << endl;
    int number;
    cin >> number;

    if (number < 1 || number > 4) {
        cout << "Value not in range" << endl;
        return 0;
    }

    else {
        if (number == 1) {
            cout << "One is the loneliest number." << endl;
            return 0; 
        }

        else if (number == 2)
        {
            cout << "Two can be as bad as one." << endl;
            return 0;
        }

        else if (number == 3)
        {
            cout << "Three is just confusing." << endl;
            return 0;
        }

        else if (number == 4)
        {
            cout << "Four means you are done." << endl;
            return 0;
        }
        
    }
}