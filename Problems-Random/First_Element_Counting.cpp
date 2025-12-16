/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Oct 29 2025 8:53:02 PM
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

bool comp(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.first < b.first;
}

void sir()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> p(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> p[i].first;
        p[i].second = i;
    }

    sort(p.begin(), p.end(), comp);

    vector<ll> a(n);
    vector<ll> R(n + 1);

    for (ll i = 0; i < n - 1; ++i)
    {
        R[i] = (p[i].first + p[i + 1].first) / 2 + 1;
    }

    for (ll i = 0; i < n; ++i)
    {
        ll li;
        if (i == 0)
        {
            a[p[i].second] = -1;
            continue;
        }
        else
        {
            li = R[i - 1];
        }

        ll ri;
        if (i == n - 1)
        {
            a[p[i].second] = -1;
            continue;
        }
        else
        {
            ri = R[i];
        }

        a[p[i].second] = ri - li;
    }

    for (auto e : a)
        cout << e << " ";
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