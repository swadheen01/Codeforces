/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Mar 19 2025 4:49:03 AM
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

ll check(ll n, string s,ll st)
{
    ll c = -1;
    ll ind = -1;
    for(ll i=0;i<n; i++)
    {
        if(s[i]=='*')
        {
            c++;
            if(c==st/2)
            {
                ind = i;
            }
        }
    }
    c = ind -st/2;
    ll ans = 0;
    for(ll i=0;i<n; i++)
    {
        if(s[i]=='*')
        {
            ans += abs(c-i);
            c++;
        }
    }
    return ans;
}

void sir()
{
    ll n; cin>>n; string s; cin>>s;
    ll st = 0; for(auto &e:s) st += (e =='*');
    if(st<2)
    {
        cout<<0<<endl;
        return;
    }
    ll c = 0;
    ll ans=0, ans2 =0;
    ll ind = -1;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='.') {ind = i; break;}
    }
   
    if(ind<0)
    {
        cout<<0<<endl;
        return;
    }
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='*') 
        {
            
            if(ind<i)
            {
                ans += abs(i-ind);
                ind++;
            }
        }
    }
    
    ind = -1;
    for(ll i=n-1; i>=0; i--)
    {
        if(s[i]=='.') 
        {
            ind = i; break;
    
        }
    }
   
    if(ind<0)
    {
        cout<<0<<endl;
        return;
    }
    for(ll i=n-1; i>=0; i--)
    {
        if(s[i]=='*') 
        {
            
            if(ind>i)
            {
                ans2 += abs(ind-i);
                ind--;
            }
        }
    }

    ll mid = n/2;
    ll haf1 = 0;
    for(ll i=mid; i>=0; i--)
    {
        if(s[i]=='.')
        {
            ind = i; break;
        }
    }
    for(ll i=mid; i>=0; i--)
    {
        if(s[i]=='*') 
        {
            
            if(ind>i)
            {
                haf1 += abs(ind-i);
                ind--;
            }
        }
    }
    ll haf2 = 0;
    for(ll i=mid+1;i<n; i++)
    {
        if(s[i]=='.')
        {
            ind = i; break;
        }
    }
    for(ll i=mid+1;i<n; i++)
    {
        if(s[i]=='*') 
        {
            
            if(ind<i)
            {
                haf2 += abs(i-ind);
                ind++;
            }
        }
    }
    // cout<<ans<<" "<<ans2<<endl;
    // cout<<haf1<<haf2<<endl;
    cout<<check(n,s,st)<<endl;;
    // ans = min(ans,(haf1+haf2));
    // cout<<min(ans, ans2)<<endl;
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
