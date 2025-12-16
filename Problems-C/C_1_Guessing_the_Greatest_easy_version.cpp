/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 02 2025 2:04:41 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
// #define endl "\n"
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

ll query(ll l, ll r)
{
    if (l >= r)
        return -1;
    cout << "? " << l << " " << r << endl;
    ll ind;
    cin >> ind;
    return ind;
}

void sir()
{
    ll n;
    cin >> n;

    ll sec = query(1, n);

    if (sec == 1 || query(1, sec) != sec)
    {
        ll l = sec, r = n;
        while (r - l > 1)
        {
            ll m = (l + r) / 2;
            if (query(sec, m) == sec)
                r = m;
            else
                l = m;
        }
        cout << "! " << r << endl;
    }
    else
    {
        ll l = 1, r = sec;
        while (r - l > 1)
        {
            ll m = (l + r) / 2;
            if (query(m, sec) == sec)
                l = m;
            else
                r = m;
        }
        cout << "! " << l << endl;
    }
}

int main()
{
    // ALLAHU_AKBAR

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
