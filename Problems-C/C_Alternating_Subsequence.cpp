/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 14 2024 8:07:06 PM
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
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll ans = 0;
    //vector<ll>a;
    for(ll i=0; i<n; i++)
    {
        if(v[i]>0)
        {
            ll mx = 0;
            ll j = i;
    
            while(j<n && v[j]>0){
                mx = max(mx,v[j]);
                j++;
                
            }
            ans += mx; 
            //a.pb(mx);
            i = j-1;
        }
        else{
            ll mxn = -1e9;
            ll j = i;
            while(j<n && v[j]<0){
                mxn = max(mxn,v[j]);
                j++;
            }
            ans += mxn; 
            //a.pb(mxn);
            i = j-1;
        }
    }
    //for(auto e:a) cout<<e<<" ";
    cout<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
