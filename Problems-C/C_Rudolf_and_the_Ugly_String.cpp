/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 03 2024 8:02:02 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
    ll n; cin>>n;
    string s; cin>>s;
    ll c = 0;
    for(ll i=0; i<=n-3; i++)
    {
        if((s[i]=='m' && s[i+1]=='a' && s[i+2]=='p') || (s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'))
        {
            c++;
            i+=2;
        }
    }
    cout<<c<<endl;
    }
    return 0;
}