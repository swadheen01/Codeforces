/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Oct 01 2025 3:57:15 PM
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
    string ss;
    cin >> ss;
    string s = ss + ss;

    reverse(ss.begin(), ss.end());

    ll n = ss.length();

    for (int i = 0; i < n; i++)
    {
        string tem = "";
        for (int j = i; j < n; j++)
        {
            tem += ss[j];
        }
        if (s.find(tem) == string::npos)
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
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
