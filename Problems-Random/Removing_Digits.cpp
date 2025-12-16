/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 07 2025 1:53:33 AM
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
    vector<ll> dp(n + 1, 1e9);

    dp[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        string num = to_string(i);
        for (auto c : num)
        {
            ll dig = c - '0';
            dp[i] = min(dp[i], dp[i - dig] + 1);
        }
    }
    cout << dp[n] << endl;
}
void sir2()
{
    ll n;
    cin >> n;

    ll ans = 0;
    while (n > 0)
    {
        string num = to_string(n);
        ll dig = 0;
        for (auto c : num)
        {
            dig = max(dig, (ll)(c - '0'));
        }
        n -= dig;
        ans++;
    }
    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        // sir();  //dp
        sir2(); // greedy
    }
    return 0;
}
