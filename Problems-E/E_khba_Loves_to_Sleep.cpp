/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 28 2025 9:12:51 PM
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

ll n, k, x;
vector<ll> a, res;

bool chk(ll d)
{
    if (a.empty())
        return true;

    ll r = 0;
    ll u = -1;

    for (auto p : a)
    {
        if (p > u)
        {
            r++;
            if (r > k)
                return false;

            ll v = min(x, p + d);
            u = v + d;
        }
    }
    return r <= k;
}

void make(ll d)
{
    res.clear();
    if (a.empty())
    {
        for (ll i = 0; i < k; ++i)
            res.pb(i);
        return;
    }

    ll u = -1;
    for (auto p : a)
    {
        if (p > u)
        {
            ll v = min(x, p + d);
            res.pb(v);
            u = v + d;
        }
    }

    ll m = res.size();
    if (m < k)
    {
        set<ll> s(res.begin(), res.end());

        for (ll p = 0; p <= x && res.size() < k; ++p)
        {
            if (s.find(p) == s.end())
                res.pb(p);
        }
    }
}

void sir()
{
    cin >> n >> k >> x;
    a.resize(n);
    for (auto &e : a)
        cin >> e;

    for (ll i = k; i >= 1; i--)
        cout << x-- << " ";
    cout << endl;
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