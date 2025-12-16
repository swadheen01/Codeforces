/*
 *Copyr (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Nov 05 2024 9:14:06 PM
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
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    ll ans = 0;
    ll ex = 0;

    bool down = false;
    ll x = 0;
    for(ll i=1;i<n-1; i++)
    {
        if(v[i]>v[i-1])
        {
            if(down) ex = 0, down = false;
            ex++;
            //x = v[i];
            if(ex==n-2) //all incre
            {
                cout<<0<<endl;
                return;
            }
            
        }
        else{
            down = true;
            if(ex>0)
            {
                if(v[i+1]>v[i])
                {
                    x = v[i-1];
                    ans++;
    
                }
            }
        }
    }
    ll cnt = 0;
    for(ll i=0; i<n; i++)
    {
        if(v[i]<x) cnt++;
        else if(v[i]==x) break;
    }
    //cout<<x<<endl;
    cout<<ans*cnt<<endl;
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
