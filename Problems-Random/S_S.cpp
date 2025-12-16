/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jan 21 2025 2:42:39 PM
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
    ll n;cin>>n;
    vector<bool>comp(n+1, false);
    vector<int>lp(n+1);
    comp[0]=comp[1] = true;
    for(ll i=2; i<=n; i++)
    {
        if(comp[i]) continue;
        
        else{
            lp[i]=i;
    
            for(ll j=i+i; j<=n; j+=i)
            {
                comp[j] = true;
                if(lp[j]==0) lp[j]=i;
            }

        }
    }
    map<ll,ll>mp;
    for(ll i=2; i<=n; i++)
    {
        if(!comp[i]) mp[i]++;
        else{
            ll x = i;
            while(x>1)
            {
                mp[lp[x]]++;
                x/=lp[x];
            }
        }
    }
    ll div = 1;
    for(auto &p:mp){
        //cout<<p.first<<" "<<p.second<<endl;
        div*=(p.second+1);
        div%=mod;
        }
       
    cout<<div<<endl;
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
