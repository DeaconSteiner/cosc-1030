// Lab06.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Lab 06
// Feb 26, 2025

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int sum = 0, counter = 0;
    bool done = false;
    int input;
    const int SENTINEL = -9999;

    cout << "Calculate the average of inputs (inputs must be non-negative numbers): \n";
    cout << "Enter numbers one by one, to finish, enter" << SENTINEL << endl;

    while (!done)
    {
        while (!(cin >> input))
        {
            cin.clear(); // Remove error state
            cin.ignore(); // Ignore next character
        }
        
        if (input == -9999)
        {
            done = true;
        }

        else if (input >= 0)
        {
            counter ++;
            sum += input;
        }
        
    }
    double avg = static_cast<double>(sum) / static_cast<double>(counter);

    cout << "Results: " << counter << " non-negative integers entered, average: " << avg << endl;

    return 0;
}

