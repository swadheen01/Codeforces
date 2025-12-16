/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Nov 03 2025 8:40:53 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back

#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define print(vec)        \
    for (auto e : vec)    \
        cout << e << " "; \
    cout << endl

void sir()
{
    string first;
    cin >> first;
    if (first == "first")
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &e : v)
            cin >> e;
        string s = "";
        for (auto e : v)
            s += ('`' + e);
        // s += '`' + 26;
        cout << s << endl;
    }
    else
    {
        string s;
        cin >> s;
        vector<ll> v;
        for (auto c : s)
        {
            v.pb(c - 'a' + 1);
        }
        cout << v.size() << endl;
        print(v);
    }
}

int main()
{
    // ALLAHU_AKBAR

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
