/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 13 2024 12:21:41 AM
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
    ll x; cin>>x;
    // string s = to_string(x);
    // ll n = s.length();
    
    for(int i=0; i<=20; i++)
    {
        if(x%11==0){
            cout<<"YES"<<endl;
            return;
        }
        x-=111;
        if(x<0) break;
    }
    cout<<"NO\n";
    
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
