/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 14 2025 12:45:59 AM
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

// void wrong()
// {
//     // Bismillahir Rahmanir Rahim 

//     ll n; cin>>n;
//     vector<ll>v;
//     ll z = n;
//     vector<ll>sum(n);
//     ll ind = 0;
//     //unordered_map<ll,ll>mp;
//     while(z--)
//     {
//         ll k;cin>>k;
//         mp[ind] = k;
//         for(ll i=0; i<k; i++)
//         {
//             cin>>arr[ind][i];
//             sum[ind] +=arr[ind][i];
//         }
//         ind++;
//     }
//     //for(auto &e:sum) cout<<e<<" ";
//     //srt(v);
//     vector<pair<ll,ll>>p(n);
//     for(ll i=0; i<n;i++)
//     {
//         p[i] = {sum[i],i};
//     }
//     srt(p);
//     //for(auto e:p) cout<<e.first<<" ";

//     for(auto &e:p)
//     {
//         ll in = e.second;
//         for(ll i=0; i<mp[in]; i++) v.pb(arr[in][i]);
//     }
//     for(auto &e:v) cout<<e<<" ";

//     ll lo=1,hi = 1e9+5, mid, ans = -1;

//     ll nn = v.size();
//     while(lo<=hi)
//     {
//         mid = lo + (hi-lo)/2;
//         ll p = mid; bool ok = true;
//         for(ll i=0;i<nn; i++)
//         {
//             if(p>v[i]) p++;
//             else {ok = false; break;}
//         }
//         if(ok)
//         {
//             ans = mid;
//             hi = mid-1;
//         }
//         else lo = mid+1;
//     }
   
//         cout<<ans<<endl;
    
// }
void sir()
{
    ll n; cin>>n;
    vector<pair<ll,ll>>a(n);
    ll ind = 0;
    ll z = n;
    while(z--)
    {
        ll k; cin>>k;
        ll mx ; cin>>mx;
        for(ll i=1; i<k; i++)
        {
            ll x; cin>>x;
            mx = max(mx, x-i);
        }
        a[ind++] = {mx, k};
    }
    srt(a);
    ll ans = a[0].first;
    ll pos = a[0].second;
    for(ll i=1; i<n; i++)
    {
        ans = max(ans, a[i].first-pos);
        pos += a[i].second;
    }
    cout<<ans+1<<endl;
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
