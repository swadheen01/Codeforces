/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Nov 18 2025 1:20:26 PM
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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &e : v)
        cin >> e;
    if (k >= 3)
    {
        cout << 0 << endl;
        return;
    }
    srt(v);
    ll ans = v[0];

    for (ll i = 0; i < n - 1; i++)
    {
        ll d = v[i + 1] - v[i];
        ans = min(ans, d);
    }
    if (k == 1)
    {
        cout << ans << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            ll d = v[i] - v[j];
            ll p = lower_bound(begin(v), end(v), d) - begin(v);
            if (p < n)
                ans = min(ans, v[p] - d);
            if (p > 0)
                ans = min(ans, d - v[p - 1]);
        }
    }

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
