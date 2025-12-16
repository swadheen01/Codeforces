/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 23 2025 11:21:23 PM
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
    vector<ll> v(n);
    for (auto &e : v)
        cin >> e;
    priority_queue<pair<ll, ll>> pq1;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq2;
    for (ll i = 0; i <= n - 1; i++)
    {
        if (v[i] > 0)
        {
            pq1.push({v[i], i + 1});
            pq2.push({v[i], i + 1});
        }
    }
    vector<pair<ll, ll>> ans;

    while (pq1.size() > 1)
    {
        pair<ll, ll> mx = pq1.top();
        pq1.pop();
        pair<ll, ll> mn = pq1.top();
        pq1.pop();

               ans.push_back({mn.second, mx.second});

        if (mx.first - 1 > 0)
            pq1.push({mx.first - 1, mx.second});
        if (mn.first - 1 > 0)
            pq1.push({mn.first - 1, mn.second});
    }

    cout << ans.size() << endl;
    for (auto p : ans)
    {
        cout << p.first << " " << p.second << endl;
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
