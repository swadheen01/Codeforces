/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 15 2024 4:16:16 AM
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
ll n, dis;
ll arr[1000+1];
bool check(ld d)
{
    if(arr[0]>d || (dis-arr[n-1]>d)) return false;
    
    for(ll i=1; i<n; i++)
    {
        if(arr[i]-arr[i-1] > 2*d) return false;
    }
    return true;
}

void sir()
{
    // cin>>n>>dis;
    // for(ll i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    // sort(arr,arr+n);
    // ld low =0; ld high=dis;
    // ld mid, ans;
    // ld e = 0.0000000001;
    // if(n==1 && dis ==1) ans = 1;
    // else{

    // while(low<=high)
    // {
    //     mid = (low + high)/2;
    //     if(check(mid)){
    //         ans = mid;
    //         high = mid-e;
    //     }
    //     else{
    //         low = mid + e;
    //     }
    // }
    // }
    
    // cout<<fixed<<setprecision(10)<<ans<<endl;
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &x:v) cin>>x;
    sort(v.begin(),v.end());
    ll ans = 2*max(v[0] , k-v[n-1]);
    for(ll i=1;i<n;i++)
    {
        ans=max(ans,v[i]-v[i-1]);
    }
   printf("%.10f\n",ans/2.);
    
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
