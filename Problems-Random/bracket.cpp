/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Aug 09 2025 3:14:03 AM
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

void sir(string &s, int n)

{
    if(s.size()==n)
    {
        cout<<s<<endl;
        return;
    }

    s.pb('(');
    sir(s,n);
    s.pop_back();
    
    s.pb(')');
    sir(s,n);
    s.pop_back();

    s.pb('{');
    sir(s,n);
    s.pop_back();

    s.pb('}');
    sir(s,n);
    s.pop_back();

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        sir(s,n);
    }
    return 0;
}
