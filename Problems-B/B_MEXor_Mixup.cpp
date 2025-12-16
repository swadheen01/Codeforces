
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jan 17 2025 1:25:49 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

const int N = 1e6;
int pref[N + 1];

void sir() {
    int a, b;
    cin >> a >> b;
    
    int res;
    b = b^pref[a];
    if (b == 0) {
        res = a;
    } else if (b != a) {
        res = a + 1;
    } else {
        res = a + 2;
    }
    
    cout << res << "\n";
}
int main() {
    ALLAHU_AKBAR

    pref[0] = 0;
    for (int i = 0; i < N; i++) {
        pref[i + 1] = pref[i] ^ i;
    }
    
    int t;
    cin >> t;
    
    while (t--) {
        sir();
    }
    
    return 0;
}
