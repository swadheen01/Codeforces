/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 12 2025 9:31:52 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_b
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

bool pal(string s)
{
    ll sz = s.size();
    for (ll i = 0; i < sz / 2; i++)
    {
        if (s[i] != s[sz - i - 1])
            return false;
    }

    if (sz % 2 && s[(sz / 2)] == '1')
    {
        return false;
    }

    return true;
}

void sir()
{
    ll n;
    cin >> n;

    string bin = bitset<32>(n).to_string();
    bin.erase(0, bin.find('1'));
    reverse(bin.begin(), bin.end());
    for (ll i = 0; i < 30; i++)
    {
        if (pal(bin))
        {
            yes;
            return;
        }
        bin += '0';
    }
    no;
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
