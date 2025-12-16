/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Feb 04 2025 12:28:32 PM
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll combination(ll n, ll r) {
    if (n < r) return 0;
    ll result = 1;
    for (ll i = 0; i < r; i++) {
        result = result * (n - i) / (i + 1);
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll total = combination(n, 5) + combination(n, 6) + combination(n, 7);
    cout << total << endl;

    return 0;
}
