/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 26 2025 9:48:12 PM
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

    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
        cin >> a[i];

    ll ans = 0;
    if (a[1] > a[2])
        ans += (a[1] - a[2]), a[1] = a[2];

    for (ll i = 3; i <= n; i += 2)
    {
        ll cng;

        ll od = a[i - 1] - a[i - 2];
        if (a[i] > od)
        {
            cng = a[i] - od;
            ans += cng;

            a[i] = a[i] - cng;
        }
        if (i + 1 <= n)
        {
            if (a[i] > a[i + 1]) // a4 er cheye small
            {
                ll mn = a[i + 1];
                ans += (a[i] - mn);
                a[i] = mn;
            }
        }

        // if (i + 1 < n)
        //     cng = min(a[i - 1], a[i + 1]);
        // else
        //     cng = a[i - 1];

        // if (a[i] > cng)
        // {
        //     ans += (a[i] - cng);
        //     a[i] = cng ;
        // }
    }
    if (n % 2 == 0)
    {
        if (a[n] < a[n - 1])
        {
            ans += a[n - 1] - a[n];
            a[n] = a[n - 1];
        }
    }

    // for (ll i = 1; i <= n; i++)
    //     cout << a[i] << " ";
    // cout << endl;

    cout << ans << endl;
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
