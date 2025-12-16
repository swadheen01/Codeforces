/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 21 2025 9:06:38 PM
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

bool check(ll x)
{
    ll r = sqrtl(x);
    return r * r == x;
}

void sir()
{
    ll n;
    cin >> n;

    if (check(n))
    {
        cout << 1 << endl;
        return;
    }

    for (ll i = 1; i * i <= n; i++)
    {
        ll rem = n - i * i;
        if (check(rem))
        {
            cout << 2 << endl;
            return;
        }
    }

    ll m = n;
    while (m % 4 == 0)
        m /= 4;
    if (m % 8 != 7)
    {
        cout << 3 << endl;
        return;
    }
    cout << 4 << endl;
}
void sir2()
{
    ll n, k;
    cin >> n >> k;
    ll m = ceil(sqrtl(n));
    ll r = (k - 1) / m + 1;
    ll c = (k - 1) % m + 1;
    cout << r << " " << c << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll a,b,c; cin>>a>>b>>c;
        cout<<max(a, max(b,c))<<endl;
    }
    return 0;
}
