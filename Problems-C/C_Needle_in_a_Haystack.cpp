/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 06 2025 3:12:38 PM
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
    string s, t;
    cin >> s >> t;
    map<char, ll> mp1, mp2;
    for (auto &c : s)
        mp1[c]++;
    for (auto &c : t)
        mp2[c]++;

    for (auto &c : s)
    {
        if (mp1[c] > mp2[c])
        {
            cout << "Impossible" << endl;
            return;
        }
    }
    string rem = "";
    for (auto [c, x] : mp2)
    {
        ll xx = x - mp1[c];
        while (xx--)
        {
            rem += c;
        }
    }
    srt(rem);
    ll sz = rem.size();
    string ans = "";
    ll ind = 0;
    for (auto c : s)
    {
        while (ind < sz && rem[ind] < c)
            ans += rem[ind], ind++;
        ans += c;
    }
    while (ind < sz)
        ans += rem[ind++];

    cout << ans << endl;
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
