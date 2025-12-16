/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 28 2025 8:57:15 PM
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll con = 0;

    for (ll i = 0; i < n; i++)
    {
        ll c = 0;
        if (s[i] == '1')
        {
            while (s[i] == '1' && i < n)
            {
                c++, i++;
            }
            i--;
        }

        con = max(con, c);
    }
    // cout << con << endl;
    if (con >= k)
    {
        no;
        return;
    }

    vector<ll> z;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            z.pb(i);
    }

    ll x = 1;
    ll ind = 0;

    yes;
    vector<ll> ans(n);
    vector<ll> used(n + 1);
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans[i] = x;
            used[x] = 1;
            x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            while (used[x])
                x++;
            ans[i] = x;
            used[x] = 1;
        }
    }
    for (auto &e : ans)
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
