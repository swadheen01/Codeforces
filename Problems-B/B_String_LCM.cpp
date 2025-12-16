/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Sep 19 2024 10:40:52 PM
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

string makestring(string s,ll k)
{
    string ans = "";
    while(k--)
    {
        ans += s;
    }
    return ans;
}

void sir()
{
    // int y
    string s,t; cin>>s>>t;
    ll n,m; n = s.length(); m = t.length();
    ll l = lcm(n,m);
    if(n==m) 
    {
        if(s==t){
        cout<<s<<endl;
        return;
        }
    else{
        cout<<-1<<endl; return;
    }
    }
    // if(n>m) swap(s,t);
    // n = s.size();
    // m = t.size();
    // string ans="";
    // ll x=0;
    // while(l--)
    // {
    //     ans += (char)s[x];
    //     x++;
    //     x%=n;
    // }
    // x=0;
    // for(ll i=0; i<l; i++)
    // {
    //     if(ans[i] != t[x]){
    //         cout<<-1<<endl;
    //         return ;
    //     }
    //     x++; x%=m;
    // }
    // cout<<ans<<endl;

    ll g = __gcd(n,m);
    if(makestring(s,m/g) == makestring(t,n/g))
    {
        cout<<makestring(s,m/g)<<endl;
    }
    else cout<<-1<<endl;

}

int main() {
    ALLAHU_AKBAR

    ll tt = 1;
    cin>>tt;
    while(tt--)
    {
        sir();
    }
    return 0;
}
