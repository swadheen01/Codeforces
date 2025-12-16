/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 13 2025 9:00:31 PM
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
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
    }
    ll ans = 0, t = 0, cur = 0;
    for (auto [a, b] : v)
    {
        ll d = a - t;
        if ((d % 2) == ((cur ^ b)))
            ans += d;

        else
            ans += d - 1;

        t = a;
        cur = b;
    }
    ll d = m - t;
    ans += d;
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
