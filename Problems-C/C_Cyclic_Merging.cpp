/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 16 2025 8:55:52 PM
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
    ll mx = -1;
    ll ind = -1;
    for (ll i = 0; i < n; i++)
        if (v[i] > mx)
        {
            mx = v[i], ind = i;
        }
    vector<ll> a;
    for (ll i = ind; i < n; i++)
        a.pb(v[i]);
    for (ll i = 0; i < ind; i++)
        a.pb(v[i]);
    // for (auto e : a)
    //     cout << e << ' ';
    vector<ll> chk;
    chk.pb(1e18);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll val = a[i];
        while (val > chk[chk.size() - 1])
        {
            chk.pop_back();
            ll add = chk[chk.size() - 1];
            ans += (min(add, val));
        }
        chk.pb(val);
    }
    // for (ll i = 1; i < chk.size(); i++)
    // {
    //     cout << chk[i] << " ";
    // }
    for (ll i = chk.size() - 1; i >= 2; i--)
        ans += chk[i - 1];

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
