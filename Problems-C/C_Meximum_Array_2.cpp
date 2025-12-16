/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 23 2025 4:01:59 PM
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
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> one(n + 1, 0);
    vector<ll> two(n + 1, 0);

    while (q--)
    {
        ll t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            for (ll j = l; j <= r; ++j)
                one[j] = 1;
        }
        else
        {
            for (ll j = l; j <= r; ++j)
                two[j] = 1;
        }
    }
    vector<ll> a(n + 1);
    ll cur = 0;
    for (ll i = 1; i <= n; ++i)
    {
        if (!two[i])
        {
            a[i] = k;
        }
        else
        {
            if (one[i])
            {
                a[i] = 1000000000;
            }
            else
            {
                a[i] = cur;
                cur = (cur + 1) % k;
            }
        }
    }
    for (ll i = 1; i <= n; ++i)
        cout << a[i] << " ";

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
