/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Feb 12 2025 1:54:19 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
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
    vector<ll>a(n);
    map<ll,ll>freq;
    for(auto &e:a)
    {
        cin>>e;
        freq[e]++;
    }
    for(auto &it:freq)
    {
        if(it.second==1)
        {
            no;
            return;
        }
        // if(it.second>=2)
        // {
        //     freq[it.first+1] += it.second-2;
        // }
    }
    yes;
    return;

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
