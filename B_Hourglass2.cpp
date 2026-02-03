/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jan 12 2026 9:00:33 PM
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
    ll s, k, m;
    cin >> s >> k >> m;

    ll f = m / k;
    ll rem = m % k;
    ll top;

    if (f == 0)
    {
        top = s;
    }
    else if (f % 2 == 1)
    {
        top = min(s, k);
    }
    else
    {
        top = s;
    }

    ll res = max(0LL, top - rem);
    cout << res << endl;
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
