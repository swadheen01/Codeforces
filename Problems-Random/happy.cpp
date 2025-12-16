/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jan 02 2025 9:06:25 PM
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
    ll a,b,c; cin>>a>>b>>c;
    cout<<120-a<<" "<<120-b<<" "<<120-c<<endl;
}
void sir2()
{
    ll n,m; cin>>n>>m;

    vector<ll>v(n),v2(m);
    set<ll>s1,s2;
    for(auto &a:v) {cin>>a;s1.insert(a);}
    for(auto &b:v2) {cin>>b; s2.insert(b);}
    srt(v); srt(v2);
    
    ll chk = 0;
    ll mn = v2[0];
    while(s1.find(chk)!=s1.end() && chk!=4){
        
         chk++;
    }
    if(chk!=4){
        no; return;
    }
    chk = 0;
    while(s2.find(chk)!=s2.end()){
        if(chk==9){
            yes; return;
        }
        chk++;
        
        }
    no;
    
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
