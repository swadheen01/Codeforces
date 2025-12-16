/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 09 2025 8:44:15 PM
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int one = 0;
    for (char c : s)
    {
        if (c == '1')
            one++;
    }

    int ans = 0;
    for (int i = 0; i < n - one; i++)
    {
        if (s[i] == '1')
            ans++;
    }

    cout << ans << endl;
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
