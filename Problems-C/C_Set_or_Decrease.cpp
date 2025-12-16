/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Dec 06 2024 5:53:44 PM
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

void solve()
{
    int n; cin>>n;
    vector<int>v(3);
    cin>>v[0]>>v[1]>>v[2]; //a,b,c
    sort(v.begin(), v.end());
    int c1 = max(n/v[0], max(n/v[1], n/v[2]));
    
    if(v[0]+v[1]+v[2]==n){
        cout<<max(1,c1)<<endl;
    }
    else if(v[0]+v[1]==n || v[0]+v[2]==n || v[1]+v[2]==n) cout<<max(2,c1)<<endl;
    else {
        if(c1>0) cout<<c1<<endl;
        else cout<<-1<<endl;
    }
    
}
int main()
{
    int t; cin>>t;
    while(t--)
    solve();
}