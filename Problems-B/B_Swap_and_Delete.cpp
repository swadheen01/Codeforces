/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jan 18 2025 11:24:27 PM
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
    string s;
    cin >> s;
    vector<int> cnt(2, 0);

    for (char c : s) {
        cnt[c - '0']++;
    }

    for (size_t i = 0; i <= s.size(); ++i) {

        if (i == s.size() || cnt[1 - (s[i] - '0')] == 0) {
            cout << s.size() - i << endl;
            return;
        }
        cnt[1 - (s[i] - '0')]--;
    }
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
