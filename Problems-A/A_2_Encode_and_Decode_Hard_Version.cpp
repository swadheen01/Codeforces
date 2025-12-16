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
        for (ll i = 0; i < n; i++)
        {
            ll e = v[i];
            string tem = "";
            while (e > 0)
            {
                tem += ('a' + (e % 10));
                e /= 10;
            }
            reverse(tem.begin(), tem.end());
            s += tem;
            if ((i != n - 1) || n == 1)
                s += 'z';
        }

        // s += '`' + 26;
        cout << s << endl;
    }
    else
    {
        string s;
        cin >> s;
        vector<ll> v;
        string tem = "";
        for (ll i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c != 'z')
                tem += (to_string(c - 'a'));
            else
            {
                v.pb(stoll(tem));
                tem = "";
            }
        }
        if (tem != "")
            v.pb(stoll(tem));
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
