/*
 *Copyright (c) LU_Avengers
 *Created on Fri Jun 14 2024 7:20:28 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool yes(int a, int b, int c, int m) {
    int total = a + b + c;
    if (m > total - 1) {
        return false;
    }
    
    int mp = min(a - 1, m) + min(b - 1, m) + min(c - 1, m);
    
    if (mp < m) {
        return false; 
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        
        if (yes(a, b, c, m)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
