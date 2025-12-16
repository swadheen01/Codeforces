/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 23 2025 8:38:18 PM
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
    // int y
    ll a,x,y; cin>>a>>x>>y;

    ll aa = abs(x-a); ll ab = abs(y-a);
    if(abs(y-x)<aa && abs(y-x)<ab)
    {
        yes;
        return;
    }
    ll h = (x+y+1)/2;
    if(h==a)
    {
        no;
        return;
    }
    ll d = abs(x-h), d2 = abs(y-h);
    if(d<aa && d2<ab)
    {
        yes;
        return;
    } 
    no;
}
void sir2()
{
    int a, x, y;
    cin >> a >> x >> y;
    bool got = false;
    for (int b = 1; b <= 100; ++b) {
        if (b == a) continue;
        if (abs(b - x) < abs(a - x) && abs(b - y) < abs(a - y)) {
            got = true;
            break;
        }
    }
    cout <<(got ?"YES":"NO")<< endl;
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
