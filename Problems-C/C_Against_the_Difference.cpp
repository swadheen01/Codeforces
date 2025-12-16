/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 26 2025 9:01:29 PM
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
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &e : a)
        cin >> e;

    vector<ll> dp(n + 1);

    vector<vector<ll>> pos(n + 1);

    for (ll i = 0; i < n; i++)
    {
        ll v = a[i];

        dp[i + 1] = dp[i];
        pos[v].pb(i);

        if (pos[v].size() >= v)
        {
            ll st = pos[v].size() - v;
            ll p = pos[v][st];

            ll cand = dp[p] + v;

            dp[i + 1] = max(dp[i + 1], cand);
        }
    }
    cout << dp[n] << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}