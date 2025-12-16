/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 21 2024 8:57:04 PM
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
    ll liv;
    if(n<=k)
    {
        liv = n*(n+1)/2;
    }
    else{
        ll d = (n-k)*k;
        liv = (k*(k+1))/2 + d;
    }
    if(liv%2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

void sir2()
{
    // int y
    ll n,k; cin>>n>>k;
    if(k>=n)
    {
        if(n%2==0 && (n/2)%2==0){
            cout<<"YES"<<endl;return;
        }
        else if(n%2==0 && (n/2)%2==1)
        {
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }
    else{
        ll d = n-k+1;
        if(d%2==0 && (d/2)%2==0){
            cout<<"YES"<<endl;return;
        }
        else if(d%2==0 && (d/2)%2==1)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(d%2==1){
            if((d/2)%2==1){
                cout<<"NO"<<endl;
                return;
            }else {
            cout<<"YES"<<endl;
            return;
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
