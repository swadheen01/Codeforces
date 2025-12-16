/*
 * Copyright (c) Swadheen Islam Robi (SIR01)
 * Created on Mon Jul 15 2024 9:15:37 PM
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

void sir() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> arr;
    char p = '1';
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') arr.pb(1);
        if (s[i] == '0' && p == '1') arr.pb(0);
        p = s[i];
    }

    int c0 = 0, c1 = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) c1++;
        else c0++;
    }

    (c0 < c1) ? cout << "Yes" << endl : cout << "No" << endl;
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
