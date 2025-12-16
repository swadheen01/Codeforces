/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 07 2025 8:46:57 PM
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
    ll a, b;
    cin >> a >> b;

    if (a % 2 == 0 && b % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    if (a % 2 == 1 && b % 2 == 1)
    {
        cout << a * b + 1 << endl;
        return;
    }

    ll ans = -1;
    ll k = b, x = 0;

    while (k % 2 == 0)
    {
        k /= 2;
        ++x;
    }

    if ((a & 1) && x == 1)
    {
        cout << ans << endl;
        return;
    }
    ll kk;
    if (a % 2 == 1)
        kk = 2;
    else
        kk = 1;

    ll s1 = a * kk + b / kk;
    ll s2 = a * (b / 2) + 2;
    ans = max(ans, max(s1, s2));

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
