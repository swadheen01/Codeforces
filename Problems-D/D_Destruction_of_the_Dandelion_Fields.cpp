/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 13 2025 9:18:38 PM
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
    vector<ll> v(n);
    ll ans = 0;
    vector<ll> odd;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            ans += v[i];
        else
            odd.pb(v[i]);
    }
    if (odd.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    rsrt(odd);

    ll nn = odd.size();
    nn = (nn + 1) / 2;
    for (ll i = 0; i < nn; i++)
    {
        ans += odd[i];
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
