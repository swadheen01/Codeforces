/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 24 2025 8:36:40 PM
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
    // int y
    ll n; cin>>n; vector<ll>v(n); for(auto &e:v) cin>>e;
    srt(v);

    ll ans1 = 0;
    ll i=0, j= n-1; 
    while(i<=j)
    {
        if(v[i]%2==v[j]%2)
        {
            break;
        }
        else{
            i++;
            ans1++;
        }
    }
    i=0; 
    ll ans2 = 0;
    while(j>=0)
    {
        if(v[i]%2==v[j]%2)
        {
            break;
        }
        else{
            j--;
            ans2++;
        }
    }

    ll ans3 = 0;
    i=0, j= n-1;
    while(i<=j)
    {
        if(v[i]%2==v[j]%2)
        {
            break;
        }
        else{
            ans3+=2;
            i++; j--;
        }
    }
    cout<<min(ans1, min(ans2,ans3))<<endl;
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
