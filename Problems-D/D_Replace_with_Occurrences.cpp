/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 07 2025 10:00:58 PM
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
    ll n;
    cin >> n;
    vector<ll> b(n);
    map<ll, ll> mp;
    map<ll, vector<ll>> mp2;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
        mp2[b[i]].pb(i);
    }

    ll num = 1;
    vector<ll> a(n);
    for (auto [x, v] : mp2)
    {
        if (v.size() % x != 0)
        {
            cout << -1 << endl;
            return;
        }
        for (ll i = 0; i < (ll)v.size(); i += x)
        {
            for (ll j = 0; j < x; j++)
            {
                a[v[i + j]] = num;
            }
            num++;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
