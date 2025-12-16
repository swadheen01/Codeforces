/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Mar 17 2025 3:33:24 AM
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
    vector<ll>v(n+2);
    ll sum = 0;
    for(auto &e:v) cin>>e, sum+=e;
    ll ind = -1;
    sort(v.begin(), v.end());
    ll sum2 = sum-v[n+1];
    ll sind = n+1;
    for(ll i=0; i<n+1; i++)
    {
        if(sum2-v[i]==v[n+1])
        {
            ind = i;
            break; 
        }
    }
    if(ind<0)
    {
        sum2 = sum - v[n];
        for(ll i=0; i<n+2; i++)
        {
            if(i==n) continue;
            if(sum2-v[i]==v[n])
            {
                ind = i;
                sind = n;
                break;
            }
        }
    }
    if(ind<0)
    {
        cout<<-1<<endl;
        return;
    }
    for(ll i=0; i<n+2; i++)
    {
        if(i==ind || i==sind) continue;
        cout<<v[i]<<" ";
    }
    cout<<endl;

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
