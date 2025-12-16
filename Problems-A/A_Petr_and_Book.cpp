/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 25 2024 1:15:41 AM
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
    int n; cin>>n;
    vector<int>v(7);
    for(int i=0; i<7; i++)
    {
        cin>>v[i];
    }
    int ans;
    int summ=0;
    int i=0;
    while(1)
    {
        if(i>6) i=0;
        ans = i;
        summ += v[i];
        if(summ>=n) break;
        i++;
    
    }
    cout<<ans+1<<endl;
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
