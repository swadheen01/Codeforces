/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Nov 24 2025 11:07:50 PM
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
    ll ans = 1;
    ll cnt = 0;
    vector<ll> v(n);
    ll xz = 0;
    for (auto &e : v)
    {
        cin >> e;
        xz += (e == 0);
    }
    if (xz == n)
    {
        cout << 0 << endl;
        return;
    }
    vector<ll> one;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            while (v[i] == 1)
            {
                cnt++;
                i++;
            }
            i--;
        }
        else
        {
            if (v[i])
            {
                ans *= v[i];
                ans %= mod;
            }

            if (cnt)
            {
                one.pb(cnt);
                cnt = 0;
            }
        }
    }
    // for (auto e : one)
    //     cout << e << " ";
    for (auto e : one)
    {
        if (e > 4)
        {
            ll x = (x / 2) * (x + 1) / 2;
            ans *= x;
        }
        else
            ans += e;
    }
    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        sir();
    }
    return 0;
}
