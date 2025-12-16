/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 29 2025 10:02:02 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define print(vec)        \
    for (auto e : vec)    \
        cout << e << " "; \
    cout << endl
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    vector<pair<ll, ll>> ans;

    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == t[i])
            continue;
        ans.push_back({i + 1, i + 1});
    }
    cout << ans.size() << endl;

    for (auto p : ans)
        cout << p.first << " " << p.second << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        sir();
    }
    return 0;
}
