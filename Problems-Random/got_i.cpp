/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 14 2024 10:24:10 PM
 */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void sir()
{
    ll n,k;
        cin>>n>>k;
        ll ans =0;
        map<ll,ll> m;

        ll pow = 0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            m[x]++;
            pow = max(x,pow);
        }
        
        while(true){
            ll val = pow;
            ll sum = 0;
            while(val>0){
                ll x = (k-sum)/val;
                x = min(x,m[val]);
                sum += x*val;
                if(sum<=k){
                m[val]-= x;
                }
                else{
                    sum -= x*val;
                }
                val/=2;
            }

            if(sum==0){
                break;
            }
            ans++;
        }
        cout<<ans<<endl;
}


int main()
{
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

    ll t;
    cin>>t;
    while(t--){
        sir();
    }
    return 0;
}