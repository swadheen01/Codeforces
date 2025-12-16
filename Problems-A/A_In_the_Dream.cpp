/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 28 2025 8:40:51 PM
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll mx1 = max(a, b);
    ll mn1 = min(a, b);

    c = c - a;
    d = d - b;

    ll mx = max(c, d);
    ll mn = min(c, d);
    if (c > d)
        swap(c, d);

    if ((mx1 <= 2 * (mn1 + 1)) && (mx <= 2 * (mn + 1)))
        yes;
    else
        no;
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
