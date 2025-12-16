/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Sep 22 2025 3:50:22 PM
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
    vector<ll> ev(n), od(n);
    map<ll, ll> evv, odd;
    for (ll i = 0; i < n; i++)
    {
        cin >> od[i];
        odd[od[i]] = i;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> ev[i];
        evv[ev[i]] = i;
    }
    if (od[0] < ev[0])
    {
        cout << 0 << endl;
        return;
    }

    ll mn = evv[2 * n];
    ll ans = 1e9;
    for (ll i = n + n - 1; i > 0; i -= 2)
    {
        ans = min(ans, odd[i] + mn);
        mn = min(mn, evv[i - 1]);
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
