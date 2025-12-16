/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 12 2025 8:55:03 PM
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
    cin >> n;
    vector<ll> b(n), a(n);
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    ll val = 1;

    a[0] = val++;

    for (ll i = 1; i < n; i++)
    {
        ll dif = b[i] - b[i - 1];

        if (dif == i + 1)
        {
            a[i] = val++;
        }
        else
        {
            a[i] = a[i - dif];
        }
    }

    for (auto e : a)
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
