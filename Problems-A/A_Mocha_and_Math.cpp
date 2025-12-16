/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Aug 14 2024 11:20:10 PM
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
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int result=a[0];
    for(int i=1;i<n;++i)
    {
        cin>>a[i];
        result=result & a[i];
    }
    cout<<result<<endl;
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
