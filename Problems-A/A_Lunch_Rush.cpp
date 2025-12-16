/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jul 16 2024 11:12:04 PM
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
    ll n,k;
    cin>>n>>k;
    int max_joy = -1000000000;
    for(ll i=0;i<n;i++){
        ll f,t;
        cin>>f>>t;
        int joy;
        if(t>k){
            joy=f-(t-k);
        }
        else{
            joy=f;
        }
        if(joy>max_joy){
            max_joy = joy;
        }

    }
    cout << max_joy<< endl;
   
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
