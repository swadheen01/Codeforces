/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 07 2025 11:57:57 AM
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
    string a,b; cin>>a>>b;
    ll n = a.size();
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]=='+') sum++;
        else sum--;
    }
    ld cnt = 0;
    ll c = 0;
    ll sum2 = 0;
    for(ll i=0; i<n; i++) 
    {
        c += (b[i]=='?');
        sum2+= (b[i]=='+');
        sum2-= (b[i]=='-');
    }

    for(ll i=0; i<=(1<<c)-1; i++)
    {
        ll ss = 0;
        for(ll j=0; j<c; j++)
        {

            if(i&(1<<j)) ss++;

            else ss--;
            
            
        }
        if(sum==(sum2+ss)) cnt++;
    }
    //cout<<cnt<<endl;
    if(c==0 && sum == sum2) cout<<fixed<<setprecision(12)<<(ld)1<<endl;
    else
    {
        cout<<fixed<<setprecision(12)<< cnt/(1<<c) <<endl;
    }
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
