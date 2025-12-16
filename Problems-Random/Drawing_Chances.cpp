/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 17 2025 8:34:18 PM
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
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    ll r = n - m;

    ll a = 0, b = 0;
    for (auto c : s)
    {
        if (c == '0')
            b++;
        else
            a++;
    }
    ll d = abs(a - b);
    if (d > r)
    {
        no;
        return;
    }
    ll r2 = r - d;
    if (r2 % 2 == 0)
    {
        yes;
    }
    else
        no;
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
