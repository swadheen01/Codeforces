/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jan 21 2025 10:56:29 AM
 */
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jan 21 2024 3:30:20 AM
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
vector<bool> isPrime(1000, true);
vector<ll> seive(ll n) {
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<ll> prime;
    for (ll i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            prime.push_back(i);
        }
    }

    return prime;
}

// void sirf()
// {
//     ll x; cin>>x;
//     map<ll,ll>mp;
//     vector<vector<ll>>v(x+1,vector<ll>());
//     for(ll i=2; i<=x; i++)
//     {
//         if(!isPrime[i]) continue;
    
//         for(ll j = i; j<=x; j+=i)
//         {
//             v[j].pb(i);
//         }
        
//     }
//     for(ll i=2; i<=x; i++)
//     {
//         for(ll j=0; j<v[i].size(); j++)
//         {
//             mp[v[i][j]]++;
//         }
//     }
//     cout<<x<<" = ";
//     for(auto &p:mp)
//     {
//         cout<<p.first<<" ("<<p.second<<") * ";
//     }
//     cout<<endl;
// }
vector<ll>p = seive(100);
void sir()
{
    ll x; cin>>x;
    map<ll,ll>mp;
    
    for(auto &e:p) cout<<e<<" ";
    for(ll n=2; n<=x; n++)
    {
        ll ind =0;
        while(n>0)
        {
            if(n%p[ind]) ind++;
            else{
                mp[p[ind]]++;
                n/=p[ind];
            }
        }
    }
    cout<<x<<" = ";
    for(auto &p:mp)
    {
        cout<<p.first<<" ("<<p.second<<") * ";
    }
    cout<<endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    for(ll c=1; c<=t; c++)
    {
        cout<<"Case "<<c<<": ";
        sir();
    }
    return 0;
}
