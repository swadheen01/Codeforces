/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 21 2024 9:34:37 PM
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
    ll n,x,y; cin>>n>>x>>y;
    if((x==1 && y==n)|| (y==x+1))
    {
        if(n%2==0)
        {
            for(ll i=0;i<n;i++)
            {
                cout<<i%2<<" ";
            }cout<<endl;
            
        }
        else{
            for(ll i=0; i<n-1; i++)
            {
                cout<<i%2<<" ";
            }cout<<2<<endl;
        }
        return;
    }
    else{
        vector<ll>v(n);
        v[x-1]=0;
        v[y-1] = 1;
        for(ll i=x; i<y-1; i++)
        {
            v[i] = 1-v[i-1];
        }
        if(v[y-1]==v[y-2]){
            v[y-2]=2;
        }
        ll pr = v[y-1];
        ll c = 2;
        for(ll i= y%n; i!=x-1; i=(i+1)%n)
        {
            c++;
        }
        if(c%2)
        {
            v[y%n] = 2;
            for(ll i=(y+1)%n; i!=x-1; i=(i+1)%n)
            {
                v[i] = 1-pr;
                pr = v[i];
            }
        }
        else{
            for(ll i=y%n; i!=x-1; i=(i+1)%n)
            {
                v[i] = 1-pr;
                pr = v[i];
            }
        }
        for(auto &e:v)cout<<e<<" ";
        cout<<endl;
        return;
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
