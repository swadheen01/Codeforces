/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 06 2025 8:43:11 PM
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

    ll even = -1, ind1 = -1, ind2 = -1;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0 && ind1 < 0)
        {
            ind1 = i;
        }
        else if (v[i] % 2 == 0 && (ind1 >= 0))
        {
            ind2 = i;
            break;
        }
    }
    if (ind1 >= 0)
    {
        for (ll i = ind1 + 1; i < n; i++)
        {

            if (v[i] % 2 == 0)
            {
                ind2 = i;
                break;
            }
        }
    }

    if (ind1 >= 0 && ind2 >= 0)
    {
        cout << v[ind1] << " " << v[ind2] << endl;
        return;
    }

    vector<ll> od, ev;
    for (auto e : v)
    {
        if (e % 2)
            od.pb(e);
        else
            ev.pb(e);
    }
    if (ev.size() == 1)
    {

        ll e = ev[0];
        auto it = lower_bound(od.begin(), od.end(), e);
        ll lo = it - od.begin();
        bool found = false;
        for (ll k = 0; k < lo; k++)
        {
            ll md = e % od[k];
            if (md % 2 == 0)
            {
                cout << od[k] << " " << e << endl;
                found = true;
                return;
            }
        }
    }
    if (od.size() < 2)
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 0; i < od.size() - 1; i++)
    {
        ll x = od[i], y = od[i + 1];
        ll rem = y % x;
        if (rem % 2 == 0)
        {
            cout << x << " " << y << endl;
            return;
        }
    }
    for (ll i = 0; i < od.size(); i++)
    {
        ll x = od[i];
        for (ll j = i + 1; j < od.size(); j++)
        {
            ll rem = od[j] % x;
            if (rem % 2 == 0)
            {
                cout << x << " " << od[j] << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
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
