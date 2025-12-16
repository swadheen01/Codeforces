/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jan 19 2025 10:01:48 PM
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


// void sir()
// {
//     // int y
//     ll n,k; cin>>n>>k;
//     vector<ll>v(n);
//     ll c = 0;
//     for(auto &e:v) {
//         cin>>e;
//         if(e>=k) c++;
//     }
//     srt(v);
//     ll x = n;
//     ll pr = 0;
//     for(ll i=0; i<n; i++)
//     {
//         ll a=v[i];
//         ll lo=i, hi=x, mid;
//         while(lo<=hi)
//         {
//             mid =(hi+lo)/2;
//             //cout<<v[mid]<<endl;
//             if(v[mid]<k-a) lo = mid+1;
//             else if(v[mid]>k-a) {
//                 hi = mid-1;
//             }
//             else{
//                 pr++;
//                 if(mid<n)
//                 {
//                     x = mid;
//                     while(v[x+1]==v[x]) x++;
                    
//                     x--;
//                     //cout<<v[i]<<" now in "<<v[x]<<endl;
//                 }
//                 else x--;
                
//                 break;
//             }
//         }
//     }
    
//     cout<<pr<<endl;
//     //for(auto &e:v) cout<<e<<" ";

// }
void sir()
{
    ll n,k,x; cin>>n>>k;
    map<int,int>mp;
    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        if(mp[k-x]){
            mp[k-x]--;
            ans++;
        }
        else mp[x]++;
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
