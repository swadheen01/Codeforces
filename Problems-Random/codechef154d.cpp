/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Oct 02 2024 9:08:18 PM
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
    ll n,k; cin>>n>>k;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // ll kc=0, km=0, alada=0;
    // for(int i=0; i<n;i++)
    // {
    //     if(arr[i]==k) kc++;
    //     else if(arr[i]%k==0 && arr[i] !=k) km++;
    //     else alada++;
    // }
    // if(kc==n) {cout<<0<<endl;return;}
    // else if(km==n) {cout<<1<<endl;return;}
    // else if(alada>0) {cout<<2<<endl;return;}
    bool ok = true;
    for(ll i=0; i<n; i++)
    {
        if(arr[i]!= k){
            ok = false;
            break;
        }
    }
    if(ok) cout<<0<<endl;
    else{
        ll start = -1;
        ll end = n;
        for(ll i=0; i<n; i++)
        {
            if(arr[i]!=k){
                if(start==-1) start = i;
                end = i;
            }
        }
        if(start==end) cout<<1<<endl;
        else{
            bool ok =true, ok2 = true;
            ll x = (arr[start] ^ k);
            for(ll i=start; i<=end; i++){
                if((arr[i]%k) != 0) ok2 = 0;
                if((arr[i]^k) != x) ok = 0;
            }
            if(ok ==1 || ok2 ==1){
                cout<<1<<endl;
            }
            else {
                cout<<2<<endl;
            }
        }

    }
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
