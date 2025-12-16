/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jan 31 2025 11:05:21 PM
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

    ll n; cin>>n;
    string s; cin>>s;

    ll ca = 0, cb = 0, cc = 0;
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]=='a' && s[i+1]=='a')
        {
            cout<<2<<endl;
            return;
        }
    }
    for(ll i=0; i<n; i++)
    {
        ca += (s[i]=='a');
    }
    if(ca==1)
    {
        cout<<-1<<endl;
        return;
    }
    //aba  aca abca acba abbacca accabba    //5,6 etc not possible

    for(ll i=0; i<n-2; i++)
    {
        string three = "";
        three += s[i], three += s[i+1], three += s[i+2];
        if(three =="aba"|| three == "aca")
        {
            cout<<3<<endl;
            return;
        }
    }
    for(ll i=0; i<n-3; i++)
    {
        string four = "";
        four += s[i], four += s[i+1], four += s[i+2], four += s[i+3];
        if(four =="abca"|| four == "acba")
        {
            cout<<4<<endl;
            return;
        }
    }
    for(ll i=0; i<n-6; i++)
    {
        string sev = "";
        sev += s[i], sev += s[i+1], sev += s[i+2], sev += s[i+3];
        sev+=s[i+4], sev+=s[i+5], sev+=s[i+6];
        if(sev =="abbacca"|| sev == "accabba")
        {
            cout<<7<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;

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
