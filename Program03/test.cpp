#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int i;
    int j;
    cout << "Please enter two numbers" << endl;
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
    
    cout << count << endl;

    return 0;
}