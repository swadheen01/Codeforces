/*
 *Copyr (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 01 2025 7:07:05 PM
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

    set<ll> s;
    map<ll, ll> d;

    s.insert(0);
    d[0] = LLONG_MAX;

    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        auto it = s.insert(x).first;

        ll ld = LLONG_MAX, rd = LLONG_MAX;
        ll lp = -1, rp = -1;

        if (it != s.begin())
        {
            auto l = prev(it);
            lp = *l;
            ld = x - lp;
        }

        auto r = next(it);
        if (r != s.end())
        {
            rp = *r;
            rd = rp - x;
        }

        ll nd = min(ld, rd);
        d[x] = nd;
        ans += nd;

        if (lp != -1)
        {
            ll old = d[lp];
            ans -= old;

            ll nw = ld;

            auto lit = s.find(lp);
            if (lit != s.begin())
            {
                auto ll = prev(lit);
                nw = min(nw, lp - *ll);
            }

            d[lp] = nw;
            ans += nw;
        }

        if (rp != -1)
        {
            ll old = d[rp];
            ans -= old;

            ll nw = rd;

            auto rit = s.find(rp);
            auto rr = next(rit);
            if (rr != s.end())
            {
                nw = min(nw, *rr - rp);
            }

            d[rp] = nw;
            ans += nw;
        }

        cout << ans << "\n";
    }
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        sir();
    }
    return 0;
}
