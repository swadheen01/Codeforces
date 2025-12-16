/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 06 2025 2:30:36 PM
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
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> v(n + 1);
    ll X = 1 << 29;

    v[0] = 0;
    for (ll i = 1; i <= n; ++i)
        v[i] = X + i;

    v[r] = v[l - 1];

    vector<ll> a(n);
    for (ll i = 1; i <= n; ++i)
    {
        a[i - 1] = v[i] ^ v[i - 1];
    }

    for (ll i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
