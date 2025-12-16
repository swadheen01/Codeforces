/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 07 2024 9:20:49 PM
 */

#include <bits/stdc++.h>
using namespace std;
// using double = long double;

// #define PI acos(-1.0)

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long double sinA, sinB, sinC;
        cin >> sinA >> sinB >> sinC;
        long double PI = acos(-1.0);
        
        long double A = round(asin(sinA) * (180 / PI));
        long double B = round(asin(sinB) * (180/ PI));
        long double C = round(asin(sinC) * (180 / PI));
        
        if (A + B + C == 180)
        cout << max(A, max(B, C)) << endl;
    else
    {
        if (A + B == C)
            cout << 180 - C << endl;
        else if (A + C == B)
            cout << 180 - B << endl;
        else
            cout << 180 - A << endl;
    }
    cout << A << " " << B << " " << C;

        //cout << max({ll(round(A)), ll(round(B)), ll(round(C))}) << endl;
    }
    
    return 0;
}
