/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 29 2025 9:03:25 PM
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
    map<ll, ll> mp;
    for(ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll o = 0, e = 0;
    for(auto [val, cnt] : mp)
    {
        if(cnt % 2 != 0) o++;
        else e++;
    }

    ll ans = o + 2 * e;

    if((n - e) % 2 != 0)
    {
        if(o == 0) ans -= 2;
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