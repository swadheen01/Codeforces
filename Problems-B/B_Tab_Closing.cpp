/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 16 2025 8:42:53 PM
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
    ll a, b, n;
    cin >> a >> b >> n;
    ll x = a / b;
    if (n <= x || (a % b == 0 && x == 1))
    {
        cout << 1 << endl;
        return;
    }
    // if (a % b == 0 || n == 1)
    // {

    // }
    cout << 2 << endl;
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
