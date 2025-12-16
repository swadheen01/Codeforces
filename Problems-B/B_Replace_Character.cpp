/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 07 2024 11:37:54 PM
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

void solve() {
    string str;
    cin >> str;
    int n = str.size();
    int q;
    cin >> q;
 
    set<int> has;
    for (int i = 0; i <= n- 4; i++) {
        if (str.substr(i, 4) == "1100") {
            has.insert(i);
        }
    }
 
    while (q--) {
        int i, v;
        cin >> i >> v;
        --i; 
 
        char new_char = '0' + v;
 
        if (str[i] != new_char) {
            for (int j = max(0, i - 3); j <= min(n - 4, i); ++j) {
                if (j <= n - 4 && str.substr(j, 4) == "1100") { // Ensure j is within bounds
                    has.erase(j);
                }
            }
 
            str[i] = new_char;
            for (int j = max(0, i - 3); j <= min(n - 4, i); ++j) {
                if (j <= n - 4 && str.substr(j, 4) == "1100") { // Ensure j is within bounds
                    has.insert(j);
                }
            }
        }
 
        cout << (has.empty() ? "NO" : "YES") << endl;
    }
}
 
int main() {
    ALLAHU_AKBAR
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}