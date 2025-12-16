/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 30 2025 1:35:52 PM
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

// void sir()
// {
//     int x, y;
//     cin >> x >> y;
//     ll n = abs(x);
//     ll k = (n - 1) * 4;
//     k += 5;
//     if (y == 0)
//     {
//     }
// }
void sir2()
{
    ll x, y;
    cin >> x >> y;
    if ((x == 0 && y == 0) || (x == 1 && y == 0))
    {
        cout << 0 << endl;
        return;
    }
    if (abs(x) >= abs(y))
    {
        ll ans = 0;
        ll xx = abs(x);
        ll d = 1;

        if (xx > 1)
        {
            ans = 5;
            for (ll i = 2; i < xx; i++)
            {
                ans += 4;
            }
        }
        else
        {
            ll ans = 1;
            for (ll i = 1; i <= xx; i++)
            {
                ans += 4;
            }
        }

        if (x < 0)
            ans += 2;
        if (y < 0)
            ans += 2;
        cout << ans << endl;
        return;
    }
    ll ans = 2;
    ll yy = abs(y);
    ll d = 2;
    for (ll i = 1; i <= yy; i++)
    {
        ans += 4;
    }
    if (x < 0)
        ans += 2;
    if (y < 0)
        ans += 2;
    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        sir2();
    }
    return 0;
}
