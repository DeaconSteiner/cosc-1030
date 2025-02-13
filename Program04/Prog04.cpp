// Prog04.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 04
// 11 Feb 2025

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int myPrompt(void);
int mySum(int);
int myFact(int);
int myMod(int);
void myPrint(int, int);

int main() {
    int input, result;

    while (true) {
        input = myPrompt();

        if (input == -9999)
        {
            break;
        }

        else if (input >= 10 && input <= 45)
        {
            result = mySum(input);
            myPrint(input, result);
        }

        else if (input < 10)
        {
            result = myFact(input);
            myPrint(input, result);
        }

        else if (input > 45)
        {
            result = myMod(input);
            myPrint(input, result);
        }

    }
    

    return 0;
}

int myPrompt(void) {
    int value;
    while (true) {
        cout << "Enter a non-negative integer (-9999 to end): ";
        cin >> value;
        if (value >= 0 || value == -9999) {
            return value;
        }
    }

    return 0;
}

int mySum(int n) {
    int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }

    return sum;
}

int myFact(int n) {
    int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }

    return fact;
}

int myMod(int n) {

    return n % 13;
}

void myPrint(int input, int result) {
    if (input >= 10 && input <= 45)
    {
        cout << "The sum from 1 to " << input << " is " << result << endl;
    }

    else if (input < 10)
    {
        cout << "The product from 1 to " << input << " is " << result << endl;
    }
    
    else if (input > 45)
    {
        cout << "The remainder of " << input << " / 13 is " << result << endl;
    }
}

