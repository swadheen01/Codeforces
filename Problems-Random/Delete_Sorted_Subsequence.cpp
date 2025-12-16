/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Oct 29 2025 9:08:44 PM
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
    string s;
    cin >> s;
    bool ok = true;
    set<ll> d;
    stack<ll> zero;
    ll z = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z++;
            zero.push(i);
        }
        else
        {
            z--;
            if (z < 0)
            {
                ok = false;
                z = 0;
                d.insert(i);
            }
        }
    }
    if (z)
        ok = false;

    if (ok)
    {
        cout << 0 << endl;
        return;
    }

    while (z > 0 && !zero.empty())
    {
        d.insert(zero.top());
        zero.pop();
        z--;
    }
    if (d.empty())
    {
        cout << 0 << endl;
        return;
    }

    int f = 0, x = 0;
    for (ll k : d)
    {
        if (s[k] == '1')
            f = 1;
        if (s[k] == '0' && f)
        {
            x = 1;
            break;
        }
    }
    if (!x)
    {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
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