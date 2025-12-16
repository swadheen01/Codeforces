/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on mp2i Nov 28 2025 8:50:34 PM
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

    vector<ll> q(n), r(n);
    for (ll &x : q)
        cin >> x;
    for (ll &x : r)
        cin >> x;

    map<ll, ll> mp1, mp2;
    for (auto x : q)
        mp1[x]++;
    for (auto x : r)
        mp2[x]++;

    ll ans = 0;

    vector<ll> uq, ur;

    for (auto &p : mp1)
        uq.pb(p.first);

    for (auto &p : mp2)
        ur.pb(p.first);

    rsrt(uq);
    srt(ur);

    multiset<ll> R(r.begin(), r.end());

    for (ll qi : q)
    {
        if (qi > k)
            continue;

        ll Rmx = (k - qi) / (qi + 1);

        auto it = R.upper_bound(Rmx);
        if (it == R.begin())
            continue;
        --it;

        if (qi == 1 && *it == 0)
            continue;

        R.erase(it);
        ++ans;
    }

    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
