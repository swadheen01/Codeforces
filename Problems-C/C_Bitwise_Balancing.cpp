/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 07 2025 2:57:09 PM
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

void sir2()
{
    ll b, c, d;
    cin >> b >> c >> d;

    ll a = b ^ d;
    if ((a | b) - (a & c) == d) {
        cout << a << "\n";
    } else {
        cout << -1 << "\n";
    }
    
}
void sir()
{
    ll b,c,d; cin>>b>>c>>d;
    // map<tuple<ll,ll,ll>,ll>table;
    // for(ll i=0; i<=1; i++)
    // {
    //     for(ll j=0; j<=1; j++)
    //     {
    //         for(ll k =0; k<=1; k++)
    //         {
    //             ll d = (i&j)|k;
    //             if(i==0 && j==1 && k==1) table[{i,j,k}] = -1;
    //             else if(i==1 && j==0 && k==0) table[{i,j,k}] = -1;
    //             else table[{i,j,k}] = d;
    //         }
    //     }
    // }
    ll a = 0;
    for(ll i=0; i<64; i++)
    {
        ll x = b&(1ll<<i);
        ll y = c&(1ll<<i);
        ll z = d&(1ll<<i);
        // if(table[{x,y,z}]==-1)
        // {
        //     cout<<-1<<endl;
        //     return;
        // }
        if((x==0 && y>0 && z>0)||(x>0 && y==0 && z==0))
        {
            cout<<-1<<endl; return;
        }
        if(x==0 && y==0 && z>0) a|=(1ll<<i);
        else if(x==0 && y>0 && z==0) a|=(1ll<<i);
        else if(x>0 && y>0 && z ==0) a|=(1ll<<i);
    }
    cout<<a<<endl;
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
