/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jul 09 2024 11:06:31 AM
 */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void sir()
{
    ll a, b; cin>>a>>b;
    if(a==b) cout<<0<<" "<<0<<endl;
    
    else
    {
        ll d = abs(a-b);
        ll gcdd = d;
        ll mov = min(a%d, d-a%d);
        cout<<gcdd<<" "<<mov<<endl;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}