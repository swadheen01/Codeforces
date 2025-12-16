/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 20 2025 9:25:36 PM
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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &e : a)
        cin >> e;
    for (auto &e : b)
        cin >> e;
    int one = 0, two = 0;

    for (auto e : a)
        one ^= e;
    for (auto e : b)
        two ^= e;
    int d = one ^ two;
    if (d)
    {

        int msb = 31 - __builtin_clzl(d);
        int pos = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            int xr = (a[i] ^ b[i]);
            if (xr & (1 << msb))
            {
                pos = i;
                break;
            }
        }
        if (pos % 2 == 0)
            cout << "Ajisai" << endl;
        else
            cout << "Mai" << endl;
        return;
    }
    cout << "Tie" << endl;
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
