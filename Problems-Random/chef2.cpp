/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 17 2024 9:52:29 PM
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        int og = n;
        int c = 0;
        int temp = n;

        while (temp > 0) {
            temp /= 2;
            c++;
        }

        cout << c << endl;

        int st = 2;
        int el = 1;

        for (int i = 1; i <= og; i++) {
            if (i == st) {
                st *= 2;
                el++;
            }

            cout << el << " ";
        }

        cout << endl;
    }

    return 0;
}