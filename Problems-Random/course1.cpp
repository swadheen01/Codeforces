/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jul 19 2024 10:03:07 PM
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
    vector<int>a(5), b(6),ans(5);
    
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<6;i++)
    {
        cin>>b[i];
    }
    int i=0, j=0;
    while(i<5)
    {
        while(j<6 && b[j]<a[i])
        {
            j++;
        }
        ans[i] = j;
        i++;
    }
    for(int i=0; i<5; i++)
    {
        cout<<ans[i]<<" ";
    }
    
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
