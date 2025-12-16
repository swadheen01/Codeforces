/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 05 2025 8:57:40 PM
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
    ll p1,p2,q1,q2; cin>>p1>>p2>>q1>>q2;
    vector<ll>v(n);
    
    for(auto &e:v) cin>>e;;
    ll mx = 0;
    for(auto &e:v) mx = max(mx, e);

    ll sum = 0;
    for (auto &e:v) sum += e;

    ll dx = q1-p1, dy = q2-p2;
    ll d2 = dx*dx + dy*dy;

    ll in = max(0ll, mx-(sum-mx));
    ll r = in*in, d3 = sum*sum;
    //cout<<d3<<endl;

    if(r<=d2 && d2<=d3) yes;
    else no;

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
 