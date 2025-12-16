/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Mar 04 2025 12:28:20 AM
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

void sir2()
{
    string s; cin>>s;
    //ll q = 0; for(auto &c:s)if(c=='?') q++;
    ll one = 0, to = 0;
    for(ll i=0; i<10; i++)
    {
        if(i%2==0)
        {
            if(s[i]=='1')
            {
                one++;
                if((to +(9-i)/2)<one)
                {
                    cout<<i+1<<endl;
                    return;
                }
            }
            else if(s[i]=='0')
            {
                if((one +(9-i)/2)<to)
                {
                    cout<<i+1<<endl;
                    return;
                }
            }
            else{
                if((to +(9-i)/2)<(one+1))
                {
                    cout<<i+1<<endl; return;
                }
                else if((one +(9-i)/2)<to)
                {
                    cout<<i+1<<endl;
                    return;
                }
                else one++;
            }
        }
        else
        {
            if(s[i]=='1')
            {
                to++;
                if((one +(9-i)/2)<to)
                {
                    cout<<i+1<<endl;
                    return;
                }
            }
            else if(s[i]=='0')
            {
                if((to +(9-i)/2)<one)
                {
                    cout<<i+1<<endl;
                    return;
                }
            }
            else{
                if((one +(9-i)/2)<(to+1))
                {
                    cout<<i+1<<endl; return;
                }
                else if((to +(9-i)/2)<one)
                {
                    cout<<i+1<<endl;
                    return;
                }
                else to++;
            }
        }
        
    }
    cout<<10<<endl;
    return;
     
}
void sir()
{
    string s; cin>>s;
    ll one = 0, to = 0;
    ll ans = 9;
    for(ll i=0; i<10; i++)
    {
        if(i%2==0) one += (s[i]=='1');
        else to += (s[i]!='0');
        if(one>(to + (10-i)/2)) ans = min(ans, i);
        if(to>(one+(9-i)/2))ans = min(ans, i);
    }
    one = 0, to = 0;
    for(ll i=0; i<10; i++)
    {
        if(i%2==0) one += (s[i]!='0');
        else to += (s[i]=='1');
        if(one>(to + (10-i)/2)) ans = min(ans, i);
        if(to>(one+(9-i)/2))ans = min(ans, i);
    }
    cout<<ans+1<<endl;
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
