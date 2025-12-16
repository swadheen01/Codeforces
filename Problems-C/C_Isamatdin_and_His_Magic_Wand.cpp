/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 28 2025 8:44:42 PM
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
    map<ll, ll> mp;
    vector<ll> v(n);
    for (auto &e : v)
    {
        cin >> e;
        mp[e % 2]++;
    }
    if (mp.size() == 1)
    {
        for (auto e : v)
            cout << e << " ";
        cout << endl;
    }
    else
    {
        srt(v);
        for (auto e : v)
            cout << e << " ";
        cout << endl;
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
