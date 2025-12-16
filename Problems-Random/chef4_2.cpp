/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 17 2024 9:01:38 PM
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
     int n, k;
     cin>>n>>k;
     string s, t;
     cin>>s>>t;
    if(s==t && (s=="01"|| s=="10")&& k%2==1){
        cout<<"NO"<<endl;
        continue;
    }
     int mis = 0, c = 0, eq = 0;
     for(auto i = 0;i<n;i++){
         if(s[i]!=t[i]){
             mis++;
             c+=s[i]-'0';
         }
         else{
             eq++;
         }
         
     }
     if(mis==2&&n==2&&k%2==0){
         cout<<"NO"<<endl;
         continue;
     }
     if(mis==c*2 && c<=k){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
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
