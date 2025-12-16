/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 22 2024 7:14:42 PM
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

ll findgcd(const vector<ll>& v) {
    ll gcd = v[0];
    for (ll i = 1; i < v.size(); i++) {
        gcd = __gcd(gcd, v[i]);
        if (gcd == 1) { // Early exit if GCD becomes 1
            break;
        }
    }
    return gcd;
}
void sir2()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    vector<ll>p1,p2;
    for(ll i=0;i<n; i++)
    {
        if(i%2)p1.pb(v[i]);
        else p2.pb(v[i]);
    }
    ll d1 = findgcd(p1);
    ll d2 = findgcd(p2);

    ll chk1=1, chk2 = 1;
    for(ll i=0; i<n-1; i++)
    {
        if(v[i]%d1==0 && v[i+1]%d1==0) chk1 = 0;
        if(v[i]%d2==0 && v[i+1]%d2==0) chk2=0;
    }
    if(chk1==1){
        cout<<d1<<endl;
        return;
    }
    else if(chk2==1){
        cout<<d2<<endl;
        return;
    }
    cout<<0<<endl;
    return;
}
void sir()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    vector<ll>p1,p2;
    if(n==2){
        if(v[0]==1 && v[1]==1)cout<<0<<endl;
        else if(v[0]==1) cout<<v[1]<<endl;
        else cout<<v[0]<<endl;
        return;
    }
    for(ll i=0;i<n; i++)
    {
        if(i%2)p1.pb(v[i]);
        else p2.pb(v[i]);
    }
    srt(p1); srt(p2);
    ll d1 = p1[0];
    ll d2 = p2[0];

    ll chk1=1, chk2 = 1;
    for(ll i=0; i<n-1; i++)
    {
        if(v[i]%d1==0 && v[i+1]%d1==0) chk1 = 0;
        if(v[i]%d2==0 && v[i+1]%d2==0) chk2=0;
    }
    if(chk1)
    {
        for(ll i=0; i<p1.size(); i++)
        {
            if(p1[i]%d1 !=0){
                chk1 = 0; break;
            }
        }
        if(chk1){
            cout<<d1<<endl;
            return;
        }
    }
    
    // chk1 = 1, chk2 = 1;
    else{
        for(ll i=0; i<p2.size(); i++)
        {
            if(p2[i]%d2 !=0){
                chk2 = 0; break;
            }
        }
        if(chk2){
            cout<<d2<<endl;
            return;
        }
    }
    cout<<0<<endl;
    return;
    
    
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
