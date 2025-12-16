#include <iostream>
#include <string>
using namespace std;

void printCheckerboard(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "##";
        }
        cout << endl;
        for (int j = 0; j < n; j++) {
            cout << "..";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Input n
        printCheckerboard(n); // Output checkerboard pattern
    }
    return 0;
}
