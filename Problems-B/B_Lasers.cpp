/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 13 2025 8:41:25 PM
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
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<ll> v(n), v2(m);
    map<ll, ll> mp;
    for (auto &e : v)
    {
        cin >> e;
        mp[e]++;
    }
    for (auto &e : v2)
    {
        cin >> e;
        mp[e]++;
    }

    if (mp[x] && mp[y])
    {
        cout << 2 << endl;
        return;
    }
    ll ans = 0;
    for (auto e : v)
        if (y >= e)
            ans++;
    for (auto e : v2)
        if (x >= e)
            ans++;
    cout << ans << endl;
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
