/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 21 2025 9:09:20 PM
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

vector<ll> pow3;

ll minDeals(ll x)
{

    ll s = 0;
    while (x > 0)
    {
        int k = int(upper_bound(pow3.begin(), pow3.end(), x) - pow3.begin()) - 1;
        x -= pow3[k];
        ++s;
    }
    return s;
}

void sir()
{
    ll n, lim;
    cin >> n >> lim;

    // if (minDeals(n) > lim)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    ll ans = 0;

    ll d = 0;
    while (n >= 3)
    {
        ll k = upper_bound(pow3.begin(), pow3.end(), n) - pow3.begin() - 1;
        // cout << k << endl;

        ll rem = n - pow3[k];
        ll need = minDeals(rem);

        ll bc = pow3[k + 1] + (k * pow3[k - 1]);
        ll bd = 1;

        ll chk = pow3[k];
        ll dont = 1;
        ll d2;
        ll cost;
        for (ll i = 0; i < k; i++)
        {
            ll d2 = chk / pow3[i];
            if (d + d2 + need > lim)
                continue;

            ll cost = pow3[i + 1] + (i * pow3[i - 1]);

            ll tot = d2 * cost;
            if (tot < bc)
            {
                bc = tot;
                bd = d2;
            }
        }
        ans += bc;
        d += bd;

        n -= pow3[k];
    }
    // cout << ans << endl;
    if (d + n > lim)
    {
        cout << -1 << endl;
        return;
    }
    // cout << ans << endl;
    ans += (n * 3);
    d += n;
    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    pow3.push_back(1);
    while (pow3.back() <= 1e9)
    {
        pow3.push_back(pow3.back() * 3);
    }

    // cout << pow3.size() << endl;

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
