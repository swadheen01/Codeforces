/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Feb 06 2025 10:29:34 PM
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

vector<ll> pfact(ll n)
{
    vector<ll>pc(n+1,0);
    for(ll i=2; i<=n; i++)
    {
        ll num = i;
        for(ll p = 2; p*p<=num; p++)
        {
            while(num%p==0)
            {
                pc[p]++;
                num/=p;
            }
        }
        if(num>1) pc[num]++;
    }
    return pc;
}

void sir()
{
    // int y
    ll n; cin>>n;
    vector<ll>pcnt = pfact(n);

    vector<ll>exp;
    for(auto &c:pcnt)
    {
        if(c>0) exp.pb(c);
    }
    ll ans = 0;
    //power jodi 75 or 25*3 or or 15*5 or 5*5*3 hoy ans++
    for(auto &e:exp)
    {
        if(e>=74) ans++;
        if(e>=24)
        {
            for(auto &f:exp)
            {
                if(f>=2 && f != e) ans++;
            }
        }
        if(e>=14)
        {
            for(auto &f:exp)
            {
                if(f>=4 && f!=e) ans++;
            }
        }
    }
    for(ll i=0; i<exp.size(); i++)
    {
        if(exp[i]>=4)
        {
            for(ll j=i+1; j<exp.size(); j++)
            {
                if(exp[j]>=4)
                {
                    for(ll k =0; k<exp.size(); k++)
                    {
                        if(exp[k]>=2 && k!=i && k!=j)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
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
