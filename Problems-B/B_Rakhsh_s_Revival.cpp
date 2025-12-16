/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 30 2024 8:43:07 PM
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
    ll n,m,k; cin>>n>>m>>k;
    string s; cin>>s;
    ll chk = 0, c = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='0'){
            chk++;
            if(chk==m){
                i+=(k-1);
                c++;
                chk = 0;
            }
        }
        else chk = 0;
        
    }
    cout<<c<<endl;
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
