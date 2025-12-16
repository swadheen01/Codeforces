/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 11 2024 9:40:07 PM
 */

#include<bits/stdc++.h>
using namespace std;

vector<int> ses(int t) {
    vector<int> res;
    
    while (t--) {
        int d, x, y;
        cin >> d >> x >> y;

        if (y >= x) {
            res.push_back(0);
            continue;
        }

        int ans = -1;
        for (int n = 0; n <= 100; ++n) {
            int dis = min(n * d, 100);
            double p = x * (100 - dis) / 100.0;
            int left = y - n;
            
            if (left >= p) {
                ans = n;
                break;
            }
        }
        res.push_back(ans);
    }
    
    return res;
}

int main() {
    int t;
    cin >> t;
    
    vector<int> result = ses(t);
    
    for (int ans : result) {
        cout << ans << endl;
    }
    
    return 0;
}
