/*
 * Copyright (c) Swadheen Islam Robi (SIR01)
 * Created on Wed Nov 27 2024 11:16:38 PM
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

void sir()
{
    int n;
    char c;
    cin >> n;
    string s1, s2;
    for (int i = 1, f = 0; i <= n; i++) {
        cin >> c;
        if (c == '2') {
            if (!f) s1 += '1', s2 += '1';
            else s1 += '0', s2 += '2';
        }
        else if (c == '1') {
            if (!f) s1 += '1', s2 += '0', f = 1;
            else s2 += '1', s1 += '0';
        }
        else s1 += '0', s2 += '0';
    }
    cout << s1 << endl;
    cout << s2 << endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--) {
        sir();
    }
    return 0;
}