/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 20 2025 10:00:30 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    vector<ll> v(n);
    for (auto &e : v)
        cin >> e;
    vector<ll> mn(n), mx(n);
    mn[0] = v[0];
    for (ll i = 1; i < n; i++)
    {
        mn[i] = min(mn[i - 1], v[i]);
    }
    mx[n - 1] = v[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        mx[i] = max(v[i], mx[i + 1]);
    }
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < n - 1; i++)
    {
        if (mn[i] > mx[i + 1])
        {
            no;
            return;
        }
    }
    ll mxu = v[0];
    for (ll i = 1; i < n; i++)
    {
        ll vv = v[i];
        // auto it = u.upper_bound(vv);
        // if (it != u.begin())
        // {

        // }
        //--it;
        ans.pb({mxu, vv});
        mxu = max(vv, mxu);
    }
    yes;
    // cout<<ans.size()<<endl;
    for (auto p : ans)
    {
        cout << p.first << " " << p.second << endl;
    }
    return;
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
