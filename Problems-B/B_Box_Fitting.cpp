/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 14 2024 10:06:34 PM
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sir() {
    ll n, w;
    cin >> n >> w;

    vector<ll> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    ll ans = 1;
    ll left = w;

    while (!s.empty()) {
        
        int idx = 0;
        while (idx < s.size() && s[idx] <= left) {
            idx++;
        }

        if (idx == 0) {
            ans++;
            left = w;
        } else {
            idx--;
            ll val = s[idx];
            left -= val;
            s.erase(s.begin() + idx);
        }
    }

    cout << ans << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        sir();
    }
    return 0;
}
