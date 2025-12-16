/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 17 2025 9:03:16 PM
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
#define ALLAHU_AkBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir2()
{
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    vector<ll> w(n), c(n);
    for (auto &e : w)
        cin >> e;
    ll mx = -1, col;
    for (auto &e : c)
    {
        cin >> e;
        mp[e]++;
        if (mp[e] > mx)
            col = e;
    }
    ll ans = 0 - k;
    for (ll i = 0; i < n; i++)
    {
        if (c[i] == col)
        {
            ans += w[i];
        }
        else
            ans -= w[i];
    }
    ll ans2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (c[i] == 0)
            ans2 += w[i];
        else
            ans2 -= w[i];
    }
    mx = -1;
    ll col2;
    for (ll i = 0; i < n; i++)
    {
        if (w[i] > mx)
        {
            col2 = c[i];
            mx = w[i];
        }
    }
    ll ans3 = 0 - k;
    for (ll i = 0; i < n; i++)
    {
        if (c[i] == col2)
            ans3 += w[i];
        else
            ans3 -= w[i];
    }
    ll chk = max(ans, max(ans2, ans3));

    ll got = 0;
    ll cc = 0;
    for (ll i = 0; i < n; i++)
    {
        if (cc == c[i])
            got += w[i];
        else
        {
            if ((got - w[i]) <= (got - k + w[i]))
            {
                got += (w[i] - k);
                cc = c[i];
            }
            else
                got -= w[i];
        }
    }

    cout << max(chk, got) << endl;
}

void sir3()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> w(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    ll ans = 0, ans2 = 0;

    for (ll i = 1; i < n; i++)
    {
        ll new1, new2;

        if (c[i - 1] == c[i])
        {
            new1 = ans + w[i];
        }
        else
        {
            new1 = ans - w[i];
        }

        new2 = max(ans2 - k + w[i], new1);

        ans = new1;
        ans2 = new2;
    }

    cout << ans2 << endl;
}
void sir()
{
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> W(n);
    for (ll i = 0; i < n; i++)
        cin >> W[i];
    vector<ll> C(n);
    for (ll i = 0; i < n; i++)
        cin >> C[i];

    const ll neg = -(1LL << 60);
    vector<ll> bst(n, neg);
    bst[0] = 0;
    ll add = 0;
    ll mx = 0;

    for (ll i = 1; i < n; ++i)
    {
        ll w = W[i];
        ll col = C[i];
        ll now = mx - k;

        if (bst[col] < now)
            bst[col] = now;
        add -= w;
        if (bst[col] > neg / 2)
            bst[col] += 2 * w;
        if (bst[col] > mx)
            mx = bst[col];
    }

    ll ans = mx + add;
    cout << ans << endl;
}

int main()
{
    ALLAHU_AkBAR

        ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
