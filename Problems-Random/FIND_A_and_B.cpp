/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 24 2025 1:33:47 AM
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
    ll x, y, z;
    cin >> x >> y >> z;

    ll a = x * y;
    if (a % z == 0)
    {
        cout << a << " " << z << endl;
        return;
    }
    a = y * z;
    if (a % x == 0)
    {
        cout << a << " " << x << endl;
        return;
    }
    a = x * z;
    if (a % y == 0)
    {
        cout << a << " " << y << endl;
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
