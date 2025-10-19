//lenght of   largest string in array of strings
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore(); // to ignore the newline character after integer input

    string strArray[n];
    cout << "Enter " << n << " strings:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, strArray[i]);
    }

    int maxLength = 0;
    string longestString;

    for (int i = 0; i < n; i++) {
        if (strArray[i].length() > maxLength) {
            maxLength = strArray[i].length();
            longestString = strArray[i];
        }
    }

    cout << "The longest string is: " << longestString << " with length " << maxLength << endl;

    return 0;
}