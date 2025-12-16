/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 08 2024 11:29:31 PM
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
    string s;cin>>s;

   
    ll c = 0;
   ll v[100100];
    v[1] = 0;
    for(ll i=1; i<s.length(); i++)
    {
        if(s[i]==s[i-1]){
            c++; 
        }v[i+1] = c;
    }

    ll q; cin>>q;
    while(q--)
    {
        ll l,r; cin>>l>>r;
        cout<<v[r] - v[l]<<endl;
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
