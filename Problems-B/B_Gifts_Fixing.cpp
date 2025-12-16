/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Aug 24 2024 12:19:12 AM
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
    int n; cin>>n;
    int a[n], b[n];
    int mina = 2e9;
    int minb = 2e9;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mina = min(mina,a[i]);

    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        minb = min(minb,b[i]);

    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += max(a[i] - mina, b[i] - minb);
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
