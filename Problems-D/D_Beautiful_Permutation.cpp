/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 01 2025 9:18:59 PM
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
#define print(vec)        \
    for (auto e : vec)    \
        cout << e << " "; \
    cout << endl
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

ll query(ll type, ll l, ll r)
{
    cout << type << " " << l << " " << r << endl;
    ll sm;
    cin >> sm;
    return sm;
}

void sir()
{
    ll n;
    cin >> n;
    ll sum = n * (n + 1) >> 1;

    ll range = query(2, 1, n) - sum;

    ll lo = 1, hi = n, mid, lowest = 1;

    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (query(1, lo, mid) == query(2, lo, mid))
        {
            lowest = mid + 1;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    cout << "! " << lowest << " " << lowest + range - 1 << endl;
}

int main()
{
    // ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
