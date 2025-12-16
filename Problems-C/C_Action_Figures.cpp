/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 28 2024 10:11:21 PM
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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    s="#"+s;
    ll ans = n*(n+1)/2,take=0;
    for(ll i=n;i>=1;i--){
 
        if(s[i]=='0'){
            if(take)
                take--;
            continue;
        }
 
        if(i-1>=take+1){
            ans-=i;
            take++;
        } else {
            take--;
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
