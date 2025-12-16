/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 21 2025 9:09:20 PM
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

vector<ll> pow3;

void sir()
{
    ll n;
    cin >> n;

    ll ans = 0;

    while (n >= 3)
    {
        ll k = upper_bound(pow3.begin(), pow3.end(), n) - pow3.begin() - 1;
        // cout << k << endl;

        ll a = pow3[k + 1];
        ll b = k * pow3[k - 1];
        ans += (a + b);

        n -= pow3[k];
    }
    ans += (n * 3);

    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    pow3.push_back(1);
    while (pow3.back() <= 1e9)
    {
        pow3.push_back(pow3.back() * 3);
    }

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
