/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jan 20 2025 9:11:25 PM
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
    map<ll,ll>mp;
    bool ok = false;
    //vector<ll>tw;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    
    srt(v);
    ll x;
    ll ind=-1;
    for(ll i=1; i<n; i++)
    {
        if(v[i]==v[i-1]) ind = i;
    }
    if(ind == -1){
        cout<<-1<<endl;
        return;
    }
    x = v[ind];
    v.erase(v.begin()+ind);
    v.erase(v.begin()+ind-1);

    for(ll i=1; i<v.size();i++)
    {
        
        if(v[i]<v[i-1]+2*x){
        cout<<x<<" "<<x<<" "<<v[i-1]<<" "<<v[i]<<endl;
        return;
        }

         
    }

    cout<<-1<<endl;
    return;

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
