/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 3:11:12 AM
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

vector<ll>ans;

void make(vector<ll>&v,vector<ll>&tem,ll sum, ll i, ll n)
{

    if(i==n)
    {
        ans.pb(sum);
        return;
    }

    make(v, tem, sum, i+1, n);

    tem.pb(v[i]);
    make(v, tem, sum+v[i], i+1, n);
    tem.pop_back();
}


void sir()
{
    ll n; cin>>n;
    vector<ll>v(n); for(auto &e:v) cin>>e;
    vector<ll>tem;
    ll sum = 0;
    sort(v.begin(), v.end());
    make(v, tem, sum, 0, n);
    
    sort(ans.begin(), ans.end());

    ll mn = 1e18;
    ll tot = 0; for(auto &e:v) tot += e;

    for(ll i=0; i<(ll)ans.size(); i++)
    {
        //cout<<ans[i+1]<<" "<<ans[i]<<endl;
        ll other = tot - ans[i];

        mn = min(mn, abs(ans[i]-other));
    }
    cout<<mn<<endl;
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
