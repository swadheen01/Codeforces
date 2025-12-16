/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 01 2025 6:02:30 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c >= a && d < b)
    {
        yes;
        return;
    }
    no;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
