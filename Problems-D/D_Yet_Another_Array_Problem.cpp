/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 28 2025 8:48:15 PM
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

ll g(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}
void sir()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &e : a)
        cin >> e;

    ll ans = -1;

    for (ll x = 2; x <= 100; ++x)
    {
        bool f = false;
        for (ll i = 0; i < n; ++i)
        {
            if (g(a[i], x) == 1)
            {
                f = true;
                break;
            }
        }

        if (f)
        {
            ans = x;
            break;
        }
    }

    if (ans != -1)
    {
        cout << ans << endl;
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
if (p < l)
    return 0;
res.clear