/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 07 2025 3:13:45 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    ll k;
    cin >> k;

    ll dig = 1, cnt = 9, start = 1;

    while (k > dig * cnt) {
        k -= (dig * cnt);
        dig++;
        cnt *= 10;
        start *= 10;
    }

    ll num = start + (k - 1) / dig;
    string s = to_string(num);
    cout << s[(k - 1) % dig] << endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
