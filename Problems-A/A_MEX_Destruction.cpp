/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Dec 20 2024 8:40:24 PM
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
    ll n; cin>>n;
    vector<ll>v(n);
    ll cz =0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==0) cz++;
    }
    if(n==cz)
    {
        cout<<0<<endl;
        return;
    }
    if(cz==0) {cout<<1<<endl; return ;}
    if(n==1 && cz!=0)
    {
        cout<<1<<endl;
        return;
    }
   
    // if(cz==1)
    // {
    //     if(v[0]==0 || v[n-1]==0){
    //         cout<<1<<endl;
    //         return;
    //     }
    //     cout<<2<<endl;
    //     return;
    // }
    // if(cz==2)
    // {
    //     if(v[0]+v[n-1]==0){
    //         cout<<1<<endl;
    //         return;
    //     }
    //     if((v[0]+v[1]==0)||(v[n-1]+v[n-2]==0))
    //     {
    //         cout<<1<<endl;
    //         return;
    //     }    
    //     cout<<2<<endl;
    //     return;
    // }
    ll cons = 0;
    ll chk = 0;
    ll i=0;
    while(v[i]==0){
        cons++;i++;
    }
   //f(cons==cz){ cout<<1<<endl;return;}
   //ons = 0;
    i=n-1;
    while(v[i]==0){
        cons++;i--;
    }
    if(cons==cz){ cout<<1<<endl;return;}
    cout<<2<<endl;
    return;

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
