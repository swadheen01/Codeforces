/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Apr 18 2025 2:41:05 PM
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
    string s; cin>>s; ll ok = 0;
    if((s.length()>=5)) ok = 1; ll one = 0, two = 0, three= 0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z') one = 1;
        if(s[i]>='a'&& s[i]<='z') two = 1;
        if(s[i]-'0'>=0 && s[i]-'0'<=9) three = 1;
    }
   //cout<<s.length()<<endl;
    if((one+two+three+ok)==4)
    {
        cout<<"Correct"<<endl;
    }
    else cout<<"Too weak"<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
