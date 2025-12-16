/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 13 2025 9:47:22 PM
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
#define ALLAHU_AKBAR         \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);

void sir()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    unordered_map<ll, ll> tot;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        tot[a[i]]++;
    }

    bool ok = 1;
    unordered_map<ll, ll> lim;

    for (auto [v, c] : tot)
    {
        if (c % k != 0)
        {
            ok = 0;
            break;
        }
        lim[v] = c / k; // minimum lagbo
    }

    if (!ok)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;

    unordered_map<ll, ll> mp;

    ll l = 0;
    for (ll r = 0; r < n; r++)
    {
        mp[a[r]]++;

        while (l <= r && mp[a[r]] > lim[a[r]])
        {
            mp[a[l]]--;
            l++;
        }
        ans += r - l + 1;
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
