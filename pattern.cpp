//pattern piryamid 
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows for the pyramid pattern: ";
    cin >> rows;
    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int j = i; j < rows; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}