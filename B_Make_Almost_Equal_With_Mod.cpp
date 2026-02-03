/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 20 2025 10:14:37 PM
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
    vector<ll> v(n);
    for (auto &e : v)
        cin >> e;
    for (ll p = 0; p <= 63; p++)
    {
        for (ll i = 0; i < n; i++)
        {
            
            if ((v[i] & (1ll << p)) != (v[0] & (1ll << p)))
            {
                p++;
                // cout << p << endl;
                cout << (1ll << p) << endl;
                return;
            }
        }
    }
}

void sir1()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &e : v)
        cin >> e;
    bool odd = 0, ev = 0;
    for (auto &e : v)
    {
        if (e % 2)
            odd = 1;
        else
            ev = 1;
    }
    if (odd && ev)
    {
        cout << 2 << endl;
        return;
    }
    ll k = 1;
    while (1)
    {
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % k != v[0] % k)
            {
                cout << k << endl;
                return;
            }
        }
        k *= 2;
    }
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
