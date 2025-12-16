/*
 *   Copyright (c) 2024 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n], arr2[n+1];
        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n+1;i++)
        {
            cin>>arr2[i];
        }
        ll ans = 1;
        int flag = 0;
        ll last = arr2[n];
        ll minn = 1e15;
        for(ll i=0; i<n;i++)
        {
            ans += abs(arr[i]-arr2[i]);
             if(last >= min(arr[i], arr2[i]) && last <= max(arr[i], arr2[i])){
                flag = 1;
            }
            minn = min(minn, abs(arr[i] - last));
            minn = min(minn, abs(arr2[i] - last));
        }
        
        
        // for(ll i=0; i<n;i++)
        // {
        //     if(arr2[i]>=arr2[n]) flag = 1;
        // }
        // for(ll i=0; i<n;i++)
        // {
        //     if(abs(arr2[n]-arr[i])<=minn){
        //         last = arr[i];
        //         minn = abs(arr2[n]-arr[i]);
        //         }
        //     if(abs(arr2[n]-arr2[i])<=minn){
        //         last = arr2[i];
        //         minn = abs(arr2[n]-arr2[i]);
        //         }
        // }

        if(flag == 1) cout<<ans<<endl;
        else cout<< (ans+= minn)<<endl;

    }
    return 0;
}