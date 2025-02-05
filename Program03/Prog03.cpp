// Prog03.cpp
// Deacon Steiner
// COSC 1030, Section 12
// Program 03
// 04 Feb 2025

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Part 1
    cout << "Please enter a number" << endl;
    int user_num;
    cin >> user_num;

    if (user_num < 1)
    {
        cout << "Please enter a number greater than 1" << endl;
    }
    else {
        int sum;
        for (int i = 0; i < user_num; i++)
        {
            sum += 1;
        }
        cout <<"The sum of the integers from 1 to " << user_num << " is " << sum << endl;
    }

    return 0;
}