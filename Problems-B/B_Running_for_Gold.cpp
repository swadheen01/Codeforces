/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Aug 25 2025 10:23:02 PM
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
    vector<vector<ll>> v(n, vector<ll>());
    for (ll i = 0; i < n; i++)
    {
        vector<ll> tem;
        for (ll j = 0; j < 5; j++)
        {
            ll x;
            cin >> x;
            tem.pb(x);
        }
        // srt(tem);
        v[i] = tem;
    }

    ll w = 0;

    for (ll i = 1; i < n; i++)
    {
        vector<ll> vw = v[w];
        vector<ll> vc = v[i];
        ll cnt = 0;
        for (ll j = 0; j < 5; j++)
        {
            if (vc[j] < vw[j])
                cnt++;
        }
        if (cnt >= 3)
            w = i;
    }
    bool ok = true;
    vector<ll> vw = v[w];
    for (ll i = 0; i < n; i++)
    {
        if (i == w)
            continue;
        ll cnt = 0;
        vector<ll> chk = v[i];
        for (ll j = 0; j < 5; j++)
        {
            if (chk[j] < vw[j])
                cnt++;
        }
        // cout << cnt << endl;
        if (cnt >= 3)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << w + 1 << endl;
        return;
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
