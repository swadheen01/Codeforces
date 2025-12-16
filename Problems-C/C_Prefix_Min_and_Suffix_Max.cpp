/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jul 01 2025 9:18:03 PM
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
    // Bismillahir Rahmanir Rahim 

    ll n; cin>>n;
    vector<ll>v(n), mx(n), mn(n);

    for(auto &e:v) cin>>e;

    string ans = "";

    mx[n-1] = 1;
    mn[0] =1;
    ll mnn = v[0], mxx = v[n-1];

    for(ll i=1; i<n; i++)
    {
        
        if(v[i]<=mnn)
        {
            mn[i]=1;
            mnn = min(mnn, v[i]);
        }
        else mn[i] = 0;
    }
    for(ll i=n-2; i>=0; i--)
    {
        
        if(v[i]>=mxx) 
        {
            mx[i] = 1;
            mxx = max(mxx, v[i]);
        }
        else mx[i] = 0;
    }

    // for(auto &e:mn) cout<<e<<" ";cout<<endl;
    // for(auto &e:mx) cout<<e<<" ";cout<<endl;


    //ans += '1';
    for(ll i=0; i<n; i++)
    {
        if(mx[i]||mn[i]) ans+='1';
        else ans += '0';
    }
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
