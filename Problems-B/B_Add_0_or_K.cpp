/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 26 2025 9:01:29 PM
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
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

ll modp(ll b, ll exp, ll mod)
{
    ll r = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            r = (r * b) % mod;
        }
        b = (b * b) % mod;
        exp /= 2;
    }
    return r;
}

int spf(int n)
{
    if (n % 2 == 0)
        return 2;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

void sir()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (auto &e : v)
        cin >> e;

    ll p = spf(k + 1);
    ll inv = modp(k % p, p - 2, p);

    for (ll i = 0; i < n; i++)
    {
        ll s = (p - (v[i] % p)) % p;
        s = (s * inv) % p;
        v[i] = v[i] + s * k;
    }

    for (auto &e : v)
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