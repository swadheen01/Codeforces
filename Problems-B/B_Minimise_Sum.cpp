/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 06 2025 9:00:58 PM
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
    // Bismillahir Rahmanir Rahim 
 
    ll n; cin>>n;
    vector<ll>v(n); for(auto &e:v) cin>>e;

    ll ans = v[0]; ll mn = v[0];
    if(ans==0)
    {
        cout<<0<<endl;
        return;
    }
    if(v[1]==0)
    {
        cout<<ans<<endl;
        return;
    }
    ans+=min(v[0],v[1]);
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
 