/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 29 2025 9:32:53 PM
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

ll check(vector<ll> &v)
{
    if (v.empty())
        return 0;

    ll sum = v[0];
    ll cur = v[0];

    for (ll i = 1; i < v.size(); i++)
    {
        cur = max(v[i], cur + v[i]);
        sum = max(sum, cur);
    }
    return sum;
}

void sir()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<ll> b(n);
    for (auto &e : a)
        cin >> e;
    for (auto &e : b)
        cin >> e;

    ll mx = 0;
    ll ind = -1;

    for (ll i = 0; i < n; i++)
    {
        if (b[i] > mx)
        {
            mx = b[i];
            ind = i;
        }
    }

    if (mx == 0 || k % 2 == 0)
    {
        cout << check(a) << endl;
        return;
    }

    vector<ll> pf(n), sf(n);
    ll cur = 0;
    for (ll i = 0; i < n; i++)
    {
        cur = max(a[i], cur + a[i]);
        pf[i] = cur;
    }
    cur = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        cur = max(a[i], cur + a[i]);
        sf[i] = cur;
    }

    ll ans = -3e18;
    for (ll i = 0; i < n; i++)
    {
        ll gain = 0;

        gain = pf[i] + sf[i] - a[i] + b[i];

        if (gain > ans)
        {
            ans = gain;
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