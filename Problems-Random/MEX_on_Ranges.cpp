/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 10 2025 09:30:12 PM
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
    ll n;
    string s;
    cin >> n >> s;

    ll a[n];
    ll idx = 0;

    ll mx = n;
    while (mx >= 0 && s[mx] != '1')
    {
        mx--;
    }

    a[idx++] = 0;

    for (ll i = 1; i < mx; i++)
    {
        if (s[i] == '0')
        {
            for (ll j = idx; j >= 1; j--)
            {
                a[j] = a[j - 1];
            }
            a[1] = i;
            idx++;
        }
        else
        {
            a[idx++] = i;
        }
    }

    while (idx < n)
    {
        a[idx++] = n;
    }

    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
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
