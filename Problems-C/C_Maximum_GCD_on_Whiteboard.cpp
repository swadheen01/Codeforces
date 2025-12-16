/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 24 2025 9:48:46 PM
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
    map<ll, ll> mp;
    for (auto &e : v)
    {
        cin >> e;
        mp[e]++;
    }

    if (mp[1] > k)
    {
        cout << 1 << endl;
        return;
    }
    if (mp.size() == 1)
    {
        cout << v[0] << endl;
        return;
    }
    vector<ll> sum(n + 1, 0);
    for (ll i = 1; i <= n; ++i)
    {
        sum[i] = sum[i - 1] + mp[i];
    }
    ll ans = 1;
    for (ll d = n; d >= 1; --d)
    {
        ll d4 = 4 * d;
        ll mx = min(n, d4 - 1);

        ll small = sum[mx];

        ll cnt = 0;

        if (d <= n)
            cnt += mp[d];

        ll d2 = 2 * d;
        if (d2 <= n)
            cnt += mp[d2];

        ll d3 = 3 * d;
        if (d3 <= n)
            cnt += mp[d3];

        ll tot = small - cnt;

        if (tot <= k)
        {
            ans = d;
            break;
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
