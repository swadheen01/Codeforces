/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 23 2024 9:47:46 PM
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
    
}
void sir2()
{
    ll x, m;
    cin >> x >> m;
    int ans = 0;

    for (ll y = 1; y <= 2*x && y<=m; ++y) {
        if (y == x) continue;
        ll z = x ^ y;
        if (z != 0 && (x % z == 0 || y % z == 0)) {
            ++ans;
        }
    }

    cout << ans << "\n";
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
