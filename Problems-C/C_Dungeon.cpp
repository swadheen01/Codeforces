/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 06 2025 10:16:44 PM
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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m), c(m);

    for (auto &e : a)
        cin >> e;
    for (auto &e : b)
        cin >> e;
    for (auto &e : c)
        cin >> e;

    vector<pair<ll, ll>> good;
    vector<ll> bad;
    for (ll i = 0; i < m; i++)
    {
        if (c[i])
        {
            good.pb({b[i], c[i]});
        }
        else
            bad.pb(b[i]);
    }
    srt(good), srt(bad);

    ll ans = 0;
    multiset<ll> st;
    for (auto e : a)
        st.insert(e);

    for (auto [l, g] : good)
    {
        auto lo = st.lower_bound(l);
        if (lo != st.end())
        {
            ans++;
            st.erase(lo);
            st.insert(max(*lo, g));
        }
    }
    vector<ll> aa;
    for (auto e : st)
        aa.pb(e);
    srt(aa);

    if (bad.size() > 0)
    {
        ll first = -1;
        for (ll i = 0; i < aa.size(); i++)
        {
            if (aa[i] >= bad[0])
            {
                first = i;
                break;
            }
        }
        if (first < 0)
        {
            cout << ans << endl;
            return;
        }
        ll mx = aa[aa.size() - 1];
        ll ind = 0;
        for (ll i = first; i < aa.size(); i++)
        {
            if (ind >= bad.size())
                break;
            if (aa[i] >= bad[ind])
            {
                ans++;
                ind++;
            }
        }
    }
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
