/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 07 2024 3:24:17 AM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void sir(){
    ll n; cin>>n;
    
    //inclusion-exclusion principle (PIE)
    //n(aUbUcUd) = n(a)+n(b)+n(c)+n(d)-n(a^b)-n(b^c)...+n(a^b^c)+....-n(a^b^c^d) 
    ll ans =  n 
            - n/2
            - n/3
            - n/5
            - n/7
            + n/6
            + n/10
            + n/14
            + n/15
            + n/21
            + n/35
            - n/30
            - n/42
            - n/70
            - n/105
            + n/210;

    cout<<ans<<endl;
}
int main(){
    int t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
}