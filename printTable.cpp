//table printing
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number to print its table: ";
    cin >> number;
    cout << "Table of " << number << " is:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
    return 0;
}