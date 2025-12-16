/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 19 2025 9:06:19 PM
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
    vector<ll>a,b,c,d;
    ll nn = n;
    ll op = 0;
    
   // map<ll,ll>mc;

    ll one = 0; ll zero = 0;
    ll good = 0;
    ll stop = 0;  //blck
    while(nn--)
    {
        ll aa,bb,cc,dd; cin>>aa>>bb>>cc>>dd;
        zero += abs(aa-cc); one += (abs(bb-dd));
        //c.pb(cc);
        if(aa==0 ||cc==0)
        {
            good += dd;
        }
        if(bb>dd)
        {
            stop += (min(aa,cc));
        }
        // if(cc==0)
        // {
        //     op+=(abs(bb-dd));
        // }
        // else{
        //     ll x = 2*abs(bb-dd);
        //     op+=x;
            
        // }
    }

    op += (one+zero)/2;
    //op += good;
    //one-=good;
    
    cout<<op+stop<<endl;
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
