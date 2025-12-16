/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 28 2025 8:37:34 PM
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
    ll n;
    cin >> n;

    ll best = LLONG_MIN;

    for (ll r = 1; r <= n; ++r)
    {
        for (ll c = 1; c <= n; ++c)
        {
            ll val = (r - 1) * n + c;
            ll sum = val;

            if (c - 1 >= 1)
                sum += val - 1;
            if (c + 1 <= n)
                sum += val + 1;
            if (r - 1 >= 1)
                sum += val - n;
            if (r + 1 <= n)
                sum += val + n;

            best = max(best, sum);
        }
    }

    cout << best << endl;
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
