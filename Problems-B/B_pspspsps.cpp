/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Dec 20 2024 9:07:37 PM
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

    ll n; cin>>n;
    string s; cin>>s;
    ll sc =0, pc =0,dc =0;
    for(ll i=0;i<n; i++)
    {
        if(s[i]=='p') pc++;
        if(s[i]=='s') sc++;
        if(s[i]=='.') dc++;
    }
    if(sc==0 || pc==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    
    bool shorto = true;
    if(s[0]=='p' || s[n-1]=='s'){
        cout<<"NO"<<endl;
        return;
    }
    bool gotp = false, gots = false;
    for(ll i=1; i<n-1; i++)
    {
        if(s[i]=='p') gotp = true;
        if(s[i]=='s')gots = true;

    }
    if(gotp && gots) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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
