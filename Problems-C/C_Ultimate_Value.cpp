/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 09 2025 09:42:11 PM
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
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll base = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
            base += a[i];
        else
            base -= a[i];
    }

    ll best = 0;

    int fo = -1, lo = -1, fev = -1, lev = -1;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            if (fo == -1)
                fo = i;
            lo = i;
        }
        else
        {
            if (fev == -1)
                fev = i;
            lev = i;
        }
    }
    if (fo != -1 && lo != -1)
        best = max(best, (ll)(lo - fo));
    if (fev != -1 && lev != -1)
        best = max(best, (ll)(lev - fev));

    // cout << fo << " " << lo << endl;
    // cout << fev << " " << lev << endl;
    ll mn = 1e9;
    ll mx = -1e9;

    for (int i = 1; i <= n; i++)
    {
        if ((i & 1) == 0)
        {
            ll val = 2LL * a[i] + i;
            if (mn != 1e9)
                best = max(best, val - mn);

            ll ev = 2LL * a[i] - i;
            if (ev > mx)
                mx = ev;
        }
        else
        {

            ll val2 = 2LL * a[i] - i;
            if (mx != -1e9)
                best = max(best, mx - val2);

            ll od = 2LL * a[i] + i;
            if (od < mn)
                mn = od;
        }
    }

    ll ans = base + max(0LL, best);
    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR
    int t;
    cin >> t;
    while (t--)
        sir();
    return 0;
}
