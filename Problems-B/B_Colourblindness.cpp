/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 14 2024 7:51:27 PM
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
    string a,b;
    cin>>a>>b;

    for(int i=0;i<n;i++)
    {
    if(a[i]=='G')a[i]='B';
    if(b[i]=='G')b[i]='B';
    }
    
    if(a==b)cout<<"YES\n";
    else cout<<"NO\n";

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
 