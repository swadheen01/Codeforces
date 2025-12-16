/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Sep 08 2025 11:51:49 PM
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
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    ll ind = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1 && ind == -1)
            ind = i;
    }
    if (ind == -1)
    {
        yes;
        return;
    }
    for (ll i = ind + x; i < n; i++)
    {
        if (v[i])
        {
            no;
            return;
        }
    }
    yes;
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
