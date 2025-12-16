/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 02 2024 9:20:16 PM
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
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    vector<ll>suff;
    ll sum = 0;
    for(ll i=n-1; i>=0; i--)
    {
        suff.pb(sum);
        if(s[i]=='1') sum+=1;
        else sum-=1;
    }
    // for(auto &e:suff) cout<<e<<" ";
    // cout<<endl;
    rsrt(suff);
    
    ll psum = 0;
    ll ans = -1;
    for(ll i=2; i<=n; i++)
    {
        if(i-2<suff.size())
        {
            psum += suff[i-2];
            if(psum>=k){
                ans = i; //break;
                cout<<ans<<endl; return;
            }
        }
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
