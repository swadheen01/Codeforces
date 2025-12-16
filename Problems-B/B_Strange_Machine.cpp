/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 24 2025 9:8:40:58 PM
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
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<ll> que(q);
    for (ll i = 0; i < q; ++i)
        cin >> que[i];

    ll bc = 0;
    for (char c : s)
        if (c == 'B')
            bc++;

    vector<ll> ans;
    for (auto x : que)
    {
        if (bc == 0)
            ans.push_back(x);

        else
        {
            ll val = 0;
            ll a = x;
            ll ind = 0;

            while (a > 0)
            {
                val++;
                if (s[ind] == 'A')
                    a--;

                else
                    a /= 2;

                ind = (ind + 1) % n;
            }
            ans.push_back(val);
        }
    }

    for (auto e : ans)
        cout << e << endl;
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
