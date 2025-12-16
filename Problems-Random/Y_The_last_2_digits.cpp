/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 12 2025 12:06:52 AM
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

void sir2()
{
    string a, b, c, d;
    cin >> a >> b >> c >> d;

    string a1 = string(1, a.back());
    string b1 = string(1, b.back());
    string c1 = string(1, c.back());
    string d1 = string(1, d.back());

    if (a.size() > 1)
        a1 = a1 + a[a.size() - 2];
    if (b.size() > 1)
        b1 = b1 + b[b.size() - 2];
    if (c.size() > 1)
        c1 = c1 + c[c.size() - 2];
    if (d.size() > 1)
        d1 = d1 + d[d.size() - 2];

    ll tot = stoll(a1) * stoll(b1) * stoll(c1) * stoll(d1); // 111, 112, 113, 114  = 2 4 0 2 4

    string ans = to_string(tot);

    ll n = ans.size();
    cout << ans[n - 2] << ans[n - 1] << endl;
}

void sir()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    ll ans = (a * b * c * d) % 100;

    if (ans < 10)
        cout << 0 << ans << endl;

    else
        cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        sir();
    }
    return 0;
}
