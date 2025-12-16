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
    // Bismillahir Rahmanir Rahim 

    ll n,k; cin>>n>>k;
    vector<ll>a(n),vv; for(auto &e:a) cin>>e;

    vv = a;
    srt(vv);
    ll val = vv[k-1];
    if(k==1)
    {
        yes;
        return;
    }
    
    
    vector<ll>v;
    for(auto &e:a) if(e<=val) v.pb(e);
    ll lo = 0, hi = v.size()-1;
    ll len = v.size()-k+1;
    while(lo<=hi)
    {
        if(v[lo] == v[hi]){
            lo++, hi--;
        }
        else
        {
            if(v[lo]<val && v[hi]<val) 
            {
                no;
                return;
            }
            else if(v[hi]>=val && v[lo]<val)
            {
                if(len==0)
                {
                    no;
                    return;
                }
                else hi--, len--;
            }
            else if(v[hi]<val && v[lo]>=val)
            {
                if(len==0)
                {
                    no;
                    return;
                }
                else lo++, len--;
            }
            else{
                if(len==0)
                {
                    no;
                    return;
                }
                else{
                    len--;
                    hi--;
                }
            }
        }
        
    }
    yes;
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
