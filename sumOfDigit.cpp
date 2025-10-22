//sum of digit
#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;
    cout << "Enter a number to calculate the sum of its digits: ";
    cin >> number;
    while (number != 0) {
        int digit = number % 10; // Extract the last digit
        sum += digit;            // Add it to the sum
        number /= 10;            // Remove the last digit
    }
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}