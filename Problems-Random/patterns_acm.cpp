#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Upper half
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print asterisk
        cout << "*";
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print asterisk
        cout << "*";
        // Print spaces
        for (int j = 0; j < 2 * (n - i - 2); j++) {
            cout << " ";
        }
        // Print asterisk
        if (i != n - 1) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print asterisk
        cout << "*";
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print asterisk
        cout << "*";
        // Print spaces
        for (int j = 0; j < 2 * (n - i - 2); j++) {
            cout << " ";
        }
        // Print asterisk
        if (i != n - 1) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
