/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jun 01 2024 10:18:02 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int t; cin>>t;
    while(t--)
    {
        ll a,b,c; cin>>a>>b>>c;
        ll ans = 0;
        if((a+b+c)!=0 && (a+b+c)%2 ==1) cout<<"-1"<<endl;
        //else cout<<(a+b+c)/2<<endl;
        // else if((a+b+c) == 1) cout<<"-1"<<endl;
        else {
            ll x = min((c-b),a);
            ans += x;

            if(c-b<a)
            {
                c -= (c-b);
                a -= x;
                ans += a;

                c -= a/2;
                b -= a/2;
                ans += b;
            }
            else{
                ans += b;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}