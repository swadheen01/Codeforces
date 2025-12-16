/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Aug 16 2025 6:54:39 AM
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
    ll n,k; cin>>n>>k;
    string s;cin>>s;
    ll res = 0;
    for(ll i=0; i<n;)
    {
        ll j = i+1;
        
        while(j < n && s[j]=='0') j++;

        ll left, right;
        if(s[i] == '1')  left = 1;
        else left = 0;

        if(j < n && s[j] == '1') right = 1;
        else  right = 0;

        ll len = j - i;
        
        if(left) len--;

        if(left && right) len-=(2*k);
        else if(left||right) len-=k;
        else len = len;
        //len -= (left+right);
        
        if(len > 0)
        {
            res += (len+k)/(k + 1);
        }
        
        i = j;
    }
    
    cout<<res<<endl;
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