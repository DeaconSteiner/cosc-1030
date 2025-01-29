// Prog02.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 02
// 28 Jan 2025

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int num1;
    int num2;
    cout << "Please enter two numbers" << endl;
    cin >> num1 >> num2;
    
    if (num1 > num2) {
        
        int counter = num2;
        int product = num2;

        while (counter < num1) {
            product *= counter+1;
        
            counter++;
        }
        
        cout << "The product of integers over this interval is " << product << endl;
    }

    else if (num1 < num2) {
                
        int counter = num1;
        int product = num1;

        while (counter < num2) {
            product *= counter+1;
        
            counter++;
        }
        
        cout << "The product of integers over this interval is " << product << endl;
    }

    else {
        int product = num1;
        cout << "The product of integers over this interval is " << product << endl;
    }

}