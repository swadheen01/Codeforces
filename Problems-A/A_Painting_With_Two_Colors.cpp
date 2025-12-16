/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 26 2025 8:42:56 PM
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
    ll n, a, b;
    cin >> n >> a >> b;

    if (n % 2 == 0)
    {
        if ((a + b) % 2 == 0)
            yes;
        else
            no;
    }

    else
    {
        if ((a % 2 == 1 && b % 2 == 1) || (a % 2 == 0 && b % 2 == 0))
            yes;

        else
            no;
    }
}
void sir()
{
    ll n, a, b;
    cin >> n >> a >> b;

    if ((n - b) % 2 != 0)
        no;
    else if (a <= b)
        yes;

    else
    {
        if ((n - a) % 2 == 0)
            yes;
        else
            no;
    }
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
