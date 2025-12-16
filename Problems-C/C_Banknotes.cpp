/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Aug 16 2025 4:48:57 AM
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
    vector<ll>v(n);
    for(auto &e:v) {
        cin>>e;
        e = pow(10, e);
    }
    //for(auto &e:v) cout<<e<<" ";cout<<endl;
    
    if(n==1)
    {
        cout<<k+1<<endl;
        return;
    }
 
    k++;
    ll ans = 0;
    ll ind = 1;
    while(k>0 && ind<n)
    {
        ll take2 = v[ind]-v[ind-1];
        ll tem = k*v[ind-1];
        ll take = min(take2, tem);

        ll kbad = take/v[ind-1];
        ans += take;
        k-=kbad;
        ind++;
    }
    ind--;
    if(k)
    {
        ans += (k*v[ind]);
    }
    cout<<ans<<endl;
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
