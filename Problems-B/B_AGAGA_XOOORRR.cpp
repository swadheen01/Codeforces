/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 06 2025 4:47:59 PM
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

    ll pre[n];
    pre[0] = v[0];
    for (ll i = 1; i < n; i++)
    {
        pre[i] = (pre[i - 1] ^ v[i]);
    }

    // for 2 len
    bool ok = false;

    {

        for (ll i = 0; i < n - 1; i++)
        {
            if (pre[i] == (pre[n - 1] ^ pre[i]))
            {
                ok = true;
                break;
            }
        }
    }
    // for 3 len

    {
        for (ll i = 0; i < n - 2; i++)
        {
            ll st = pre[i];
            for (ll j = i + 1; j < n - 1; j++)
            {
                ll mid = pre[j] ^ pre[i];
                ll en = pre[n - 1] ^ pre[j];

                if (st == mid && mid == en)
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
                break;
        }
    }

    if (ok)
        yes;
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
