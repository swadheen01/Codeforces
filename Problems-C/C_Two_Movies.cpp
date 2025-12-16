/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 26 2025 11:35:21 PM
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
    vector<ll>a(n), b(n);
    for(auto &e:a) cin>>e;
    for(auto &e:b) cin>>e;

    ll ans1 = 0, ans2 = 0;

    ll neg = 0, pos = 0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]<b[i])
        {
            ans2+=b[i];
        }
        else if(b[i]<a[i])
        {
            ans1+=a[i];
        }
        else{
            if(a[i]<0) neg++;
            else if(a[i]>0) pos++;
        }
    }
    while(pos--)
    {
        if(ans1<ans2) ans1++;
        else ans2++;
    }
    while(neg--)
    {
        if(ans1>ans2) ans1--;
        else ans2--;
    }
    cout<<min(ans1,ans2)<<endl;
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
