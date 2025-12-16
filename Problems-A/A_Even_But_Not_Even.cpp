/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 24 2025 1:00:24 AM
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

    ll sum = 0;
    for (auto c : s)
        sum += (c - '0');

    ll last = s[n - 1] % 2;
    if (sum % 2 == 0 && last == 1)
    {
        cout << s << endl;
        return;
    }
    if (sum == 0)
    {
        cout << -1 << endl;
        return;
    }
    string ans = "";
    for (ll i = 0; i < n; i++)
    {
        if ((s[i] - '0') % 2)
            ans += s[i];
        if (ans.length() == 2)
            break;
    }
    if (ans.length() == 2)
        cout << ans << endl;
    else
        cout << -1 << endl;
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
