/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 02 2025 4:47:42 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back

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

bool ask(ll n)
{
    cout << n << endl;
    string s;
    cin >> s;
    return s == "<";
}

void sir()
{
    ll lo = 1, hi = 1e6, mid, ans = -1;
    while (lo <= hi)
    {
        mid = (lo + hi) >> 1;
        if (ask(mid))
        {
            hi = mid - 1;
        }
        else
        {
            ans = mid;
            lo = mid + 1;
        }
    }
    cout << "! " << ans << endl;
}

int main()
{
    // ALLAHU_AKBAR

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        sir();
    }
    return 0;
}
