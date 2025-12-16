/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Nov 13 2024 10:36:04 PM
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
    ll n; cin>>n;
    string s; cin>>s;
    string s2 = s;
    reverse(s2.begin(), s2.end());
    if(s==s2){
        cout<<0<<endl;
        return;
    }
    s = s.substr(0,n-1);
    s2 = s2.substr(0,n-1);
    if(n==2){
        cout<<-1<<endl;
        return;
    }
    if(n%2==0)
    {
        string ss = s;
        string st = s2;
        reverse(ss.begin(), ss.end());
        reverse(st.begin(), st.end());
        if(ss == s && st == s2){
            cout<<-1<<endl;
            return;
        }
       
    }
     cout<<1<<endl;
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
