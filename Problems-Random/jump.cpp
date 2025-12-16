/*
 * Copyright (c) LU_Avengers
 * Created on Fri Jun 14 2024 7:00:28 PM
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        int j = 0;
        while (j * (j + 1) < 2 * x) {
            j++;
        }
        
        if (j * (j + 1) / 2 == x + 1) {
            j++;
        }
        
        cout << j << endl;
    }
    return 0;
}
