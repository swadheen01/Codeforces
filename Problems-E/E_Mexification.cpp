/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 07 2025 10:28:32 PM
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

ll find(vector<ll> &v)
{
    set<ll> s(v.begin(), v.end());
    ll m = 0;
    while (s.count(m))
        m++;
    return m;
}

void sir()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    if (k == 0)
    {
        ll sum = 0;
        for (ll x : v)
            sum += x;
        cout << sum << endl;
        return;
        ;
    }

    ll mx = find(v);
    map<ll, ll> cnt;
    for (ll x : v)
        cnt[x]++;

    vector<ll> v1(n);
    for (ll i = 0; i < n; i++)
    {
        if (v[i] < mx && cnt[v[i]] == 1)
        {
            v1[i] = v[i];
        }
        else
        {
            v1[i] = mx;
        }
    }

    if (k == 1)
    {
        ll sum = 0;
        for (ll x : v1)
            sum += x;
        cout << sum << "\n";
        return;
    }

    ll mx2 = find(v1);
    map<ll, ll> cnt2;
    for (ll x : v1)
        cnt2[x]++;

    vector<ll> v2(n);
    for (ll i = 0; i < n; i++)
    {
        if (v1[i] < mx2 && cnt2[v1[i]] == 1)
        {
            v2[i] = v1[i];
        }
        else
        {
            v2[i] = mx2;
        }
    }

    if (v1 == v2)
    {
        ll sum = 0;
        for (ll x : v1)
            sum += x;
        cout << sum << endl;
    }
    else
    {
        ll sum = 0;
        if (k % 2 == 1)
        {

            for (auto x : v1)
                sum += x;
        }
        else
        {
            for (auto x : v2)
                sum += x;
        }
        cout << sum << endl;
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
