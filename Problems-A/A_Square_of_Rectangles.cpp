
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jun 21 2025 9:04:50 PM
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

bool check(ll s, ll a, ll b, ll c, ll d, ll e, ll f){
    if(a==s && c==s && e==s && b+d+f==s) return true;
    if(b==s && d==s && f==s && a+c+e==s) return true;
    if(b==s && c==s-a && e==s-a && d+f==s) return true;
    if(a==s && d==s-b && f==s-b && c+e==s) return true;
    return false;
}

void sir()
{
    vector<pair<ll,ll>> r(3);
    ll ar = 0;
    for (ll i = 0; i < 3; i++) {
        cin >> r[i].first >> r[i].second;
        ar += r[i].first * r[i].second;
    }
    ll s = sqrtl(ar);
    bool ok = false;
    if (s * s == ar) {
        ll p[6][3] = {{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
        for (auto &ord:p) {
            ll i1 = ord[0], i2 = ord[1], i3 = ord[2];
            ll a = r[i1].first, b = r[i1].second, c = r[i2].first, d = r[i2].second, e=r[i3].first, f = r[i3].second;
            if (check(s,a,b,c,d,e,f)) {
                ok = true;
                break;
            }
        }
    }
    if(ok)
    {
        yes; return;
    }
    no;   
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
