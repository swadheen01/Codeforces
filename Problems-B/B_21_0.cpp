/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 07 2024 8:45:30 PM
 */
#include <bits/stdc++.h>
using namespace std;

void sir() {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> prob(n);
        prob[0] = a[0];
        for (int i = 1; i < k; ++i) {
            prob[i] = a[i]-a[i-1];
        }

        for (int i = k; i < n; ++i) {
            prob[i] = a[i] - a[i-1] + prob[i-k];
        }
        // for (int i = 0; i < n; ++i) {
        //     cout<<prob[i]<<" ";
        // }

        int mx = 0, curnt = 0;
        for (int i = 0; i < n; ++i) {
            if (prob[i] > 0) {
                ++curnt;
                mx = max(mx, curnt);
            } else {
                curnt = 0;
            }
        }
        
        cout << mx << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
    sir();
    }
    return 0;
}