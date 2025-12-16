/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jan 03 2025 11:23:43 PM
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
      ll n,p;
      cin>>n>>p;
      vector<pair<ll,ll>>v(n);
      for(ll i=0;i<n;i++)
      {
        int x; cin>>x;
        v[i].first=x;
      }
      for(ll i=0;i<n;i++)
      {
        int x; cin>>x;
        v[i].second=x;
      }
      sort(v.begin(),v.end(),[](pair<ll,ll>a,pair<ll,ll>b){return a.second<b.second;});
      ll ct=1,cost=p;
      for(ll i=0;i<n;i++)
      {
    
        if(v[i].second>p)break;
        else 
        {
          ll x= min(v[i].first,n-ct);
          ct+=x;
          
          cost+= (v[i].second*x);

        }
        if(ct==n) break;
      }
      int rem = n-ct;
      cout<<cost+rem*p<<endl;
    
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
