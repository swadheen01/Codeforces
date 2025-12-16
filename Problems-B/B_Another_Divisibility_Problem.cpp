/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 09 2025 9:14:51 PM
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

ll cnt(ll tem)
{
    ll d = 0;
    while (tem > 0)
    {
        d++;
        tem /= 10;
    }
    return d;
}

void sir()
{
    ll x;
    cin >> x;

    // x*num
    bool got = false;
    for (ll k = 1; k <= 1000 && !got; k++)
    {
        ll y = x * k;
        if (y >= 1000000000)
            break;

        ll d = cnt(y);

        ll p = 1;
        for (ll i = 0; i < d; i++)
            p *= 10;

        ll big = x * p + y;
        if (big % (x + y) == 0)
        {
            cout << y << endl;
            got = true;
        }
    }

    // just y
    if (!got)
    {
        for (ll y = 1; y <= 10000 && !got; y++)
        {
            ll d = cnt(y);

            ll p = 1;
            for (ll i = 0; i < d; i++)
                p *= 10;

            ll big = x * p + y;
            if (big % (x + y) == 0)
            {
                cout << y << endl;
                got = true;
            }
        }
    }
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
