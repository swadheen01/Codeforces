/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 12 2025 12:15:33 AM
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
    ll n;cin>>n;
    vector<ll>v(n);
    unordered_map<ll,ll>mp;
    for(ll i=0; i<n; i++)
    {
        ll x; cin>>x;
        v[i] = x%10;
        mp[v[i]]++;
    }
    //srt(v);
    vector<ll>a;
    for(auto &[x,y]:mp)
    {
        y = min(3ll,y);
        while(y--)
        {
            a.pb(x);
        }
    }

    for(ll i=0;i<a.size();i++)
    {
        for(ll j=i+1; j<a.size(); j++)
        {
            for(ll k=j+1; k<a.size(); k++)
            {
                int sum = a[i]+a[j]+a[k];
                if(sum==3 || sum==13 || sum==23)
                {
                    yes;
                    return;
                }
            }
        }
    }
    no;
}
void sir2()
{
    // Bismillahir Rahmanir Rahim 

    ll n;cin>>n;
    vector<ll>v(n);
    // map<ll,ll>mp;
    for(ll i=0; i<n; i++)
    {
        ll x; cin>>x;
        v[i] = x%10;
    }
    srt(v);
    vector<ll>a;
    ll cnt = 1, now=v[0]; a.pb(v[0]);
    for(ll i=1; i<n;i++)
    {
        if(v[i]==now)
        {
            if(cnt==3)
            {
                while(v[i]==now) i++;
                i--;
            }
            else{
                cnt++;
                a.pb(v[i]);
            }
        }
        else{
            cnt = 1;
            a.pb(v[i]);
        }

    }
    //for(auto &e:a) cout<<e<<" ";
    for(ll i=0;i<a.size();i++)
    {
        for(ll j=i+1; j<a.size(); j++)
        {

            ll b = 13-(a[i]+a[j]);
            ll c = 23-(a[i]+a[j]);
            if(a[i] +a[j]==0) 
            {
                auto it1 = lower_bound(a.begin()+j, a.end(),0);
                if(it1 != a.end())
                {
                    if(*it1==0)
                    {
                        yes;
                        return;
                    }
                }
            }
            if(b>=0)
            {
                auto it2 = lower_bound(a.begin()+j, a.end(),b);
                if(it2 != a.end())
                {
                    if(*it2==b)
                    {
                        yes;
                        return;
                    }
                }
            }
            if(c>=0)
            {
                auto it3 = lower_bound(a.begin()+j, a.end(),c);
                if(it3 != a.end())
                {
                    if(*it3==c)
                    {
                        yes;
                        return;
                    }
                }

            }
            
             
        }
    }
    no;
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
