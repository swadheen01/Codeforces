/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 13 2024 10:57:17 PM
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
    string s; cin>>s;
    int c1 = 0;
    int c0 = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0'){
            c1 = 0;
            c0++;
            if(c0==7){
                cout<<"YES"<<endl;
                return;
            }
        }
        else{
            c0 = 0;
            c1++;
            if(c1==7){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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
