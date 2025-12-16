/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Dec 12 2024 11:04:42 PM
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
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &a:v) cin>>a;

    sort(v.rbegin(),v.rend());
    ll mx = v[0];
    //for(auto &a:v) cout<<a<<" ";
    ll sumA = 0, sumB = 0;
    for(ll i=0; i<n; i++){
        if(i%2){
            ll need = min(k,(v[i-1]-v[i]));
            v[i]+= need;
            sumB += v[i];
            k -= need;
        }
        else sumA +=v[i];
     }
     cout<<sumA - sumB<<endl;
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
