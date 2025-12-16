/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 07 2024 9:20:49 PM
 */

#include <bits/stdc++.h>
using namespace std;
double raddig(double r) {
    return r * (180.0 / acos(-1.0));
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        double sina, sinb, sinc;
        cin >> sina >> sinb >> sinc;

        
        double a = asin(sina);
        double b = asin(sinb);
        double c = asin(sinc);

        double a_deg = raddig(a);
        double b_deg = raddig(b);
        double c_deg = raddig(c);
 
        int int_a = round(a_deg);
        int int_b = round(b_deg);
        int int_c = round(c_deg);

        int ans = max(int_a, max(int_b, int_c));

        cout << ans << endl;
    }

    return 0;
}
