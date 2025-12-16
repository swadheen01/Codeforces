/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jun 11 2024 11:20:31 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void sir()
{
    ll n; cin>>n;
    ll arr[n];
    
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll ans = 0;
    ll mx = -1;
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        sum += arr[i];
        mx = max(mx, arr[i]);
        if(2*mx==sum) ans++;
    }
    cout<<ans<<endl;

}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sir();
    }
}