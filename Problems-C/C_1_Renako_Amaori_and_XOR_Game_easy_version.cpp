/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 20 2025 9:04:48 PM
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
    vector<ll> a(n), b(n);
    for (auto &e : a)
        cin >> e;
    for (auto &e : b)
        cin >> e;
    ll c1 = 0;
    for (auto e : a)
        c1 += (e == 1);
    ll c2 = 0;
    for (auto &e : b)
        c2 += (e == 1);
    // cout << c1 << " " << c2 << endl;
    //  if (c1 % 2 == 0)
    //  {
    //      for (ll i = 0; i < n; i += 2)
    //      {
    //          if (a[i] == 1 && b[i] == 0)
    //          {
    //              c1--;
    //              c2++;
    //              break;
    //          }
    //          if (a[i] == 0 && b[i] == 1)
    //          {
    //              c1++;
    //              c2--;
    //              break;
    //          }
    //      }
    //  }
    //  if (c2 % 2 == 0)
    //  {
    //      for (ll i = 1; i < n; i += 2)
    //      {
    //          if (b[i] == 1 && a[i] == 0)
    //          {
    //              c2--;
    //              c1++;
    //              break;
    //          }
    //          if (b[i] == 0 && a[i] == 1)
    //          {
    //              c2++;
    //              c1--;
    //              break;
    //          }
    //      }
    //  }
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (c1 % 2 == 0)
            {
                if (a[i] == 1 && b[i] == 0)
                {
                    c1--;
                    c2++;
                }
                else if (a[i] == 0 && b[i] == 1)
                {
                    c1++;
                    c2--;
                }
            }
        }
        else
        {
            if (c2 % 2 == 0)
            {
                if (b[i] == 1 && a[i] == 0)
                {
                    c2--;
                    c1++;
                }
                if (b[i] == 0 && a[i] == 1)
                {
                    c2++;
                    c1--;
                }
            }
        }
    }
    // cout << c1 << " " << c2 << endl;
    if (c1 % 2 == 1 && c2 % 2 == 0)
    {
        cout << "Ajisai" << endl;
        return;
    }
    if (c2 % 2 == 1 && c1 % 2 == 0)
    {
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
