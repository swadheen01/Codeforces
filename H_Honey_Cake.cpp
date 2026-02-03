/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jan 01 2026 12:01:37 AM
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
    ll w, h, d;
    cin >> w >> h >> d;
    ll n;
    cin >> n;

    __int128_t tot = (__int128_t)w * h * d;

    if (tot % n != 0)
    {
        cout << -1 << endl;
        return;
    }

    __int128_t small = tot / n;

    ll limit_i = (small > w) ? w : (ll)small;

    for (ll i = 1; i <= limit_i; i++)
    {
        ll limit_j = (small > h) ? h : (ll)small;
        for (ll j = 1; j <= limit_j; j++)
        {
            ll x = i * j;
            
            if (small % x == 0) 
            {
                __int128_t k = small / x;
                
                if (k <= d && w % i == 0 && h % j == 0 && d % (ll)k == 0)
                {
                    cout << (w / i - 1) << " " << (h / j - 1) << " " << (d / (ll)k - 1) << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
    return;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    while (t--)
    {
        sir();
    }
    return 0;
}