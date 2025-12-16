/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 22 2024 1:52:01 AM
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
    vector<int>v(n);
    int x;
    for(auto &x:v)cin>>x;

    sort(v.begin(), v.end());
    
    int ans = 1;
    for(int i=1; i<n; i++)
    {
        if(v[i] != v[i-1]) ans++;
    }
    if((n-ans)%2==0) cout<<ans<<endl;
    else cout<<ans-1<<endl;
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
