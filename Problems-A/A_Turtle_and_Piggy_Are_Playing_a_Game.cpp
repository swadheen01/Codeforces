/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri May 31 2024 4:15:16 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll l,r; cin>>l>>r;
        ll c = 0;
        while(1){
            if(r==1) break;
            else{
                r = r/2; c++;
            }
            

        }
        cout<<c<<endl;

    }
}