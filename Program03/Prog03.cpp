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
    int user_num;
    cout << "Please enter a number: ";
    cin >> user_num;

    while (user_num < 1)
    {
        cout << "Please enter a number greater than 0: ";
        cin >> user_num;
    }
        int sum = 0;
        for (int i = 1; i <= user_num; i++)
        {
            sum += i;
        }
        cout <<"The sum of the integers from 1 to " << user_num << " is " << sum << endl;

    // Part 2
    int i, j;
    cout << "\nPlease enter two numbers (Separated with a space): ";
    cin >> i >> j;

if (i > j) {
    std::swap(i, j);
}

    int counter = i + 1;
    int count = 0;

    while (counter < j)
    {   
        count++;
        counter++;
    }
    
    cout << "The interval between " << i << " and " << j << " is " << count << endl;

    // Part 3
    int k, l;
    cout << "\nPlease enter two numbers, the second cannot be negative (Separated with a space): ";
    cin >> k >> l;

    while (l < 0)
    {
        cout << "Please enter two numbers, the second cannot be negative (Separated with a space): ";
        cin >> k >> l;
    }
    if (l == 0)
    {
        cout << "The result of " << k << "^0 is 1" << endl;
    }
    else
    {
        int product = 1;
        int counter = 0;
        do
        {
            product *= k;
            counter ++;
        } while (counter < l);
        cout << "The result of " << k << "^" << l << " is " << product << endl;
    }


    return 0;
}