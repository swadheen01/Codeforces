/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jun 26 2025 9:46:35 PM
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

    string ans = "";
    ll del = 0;

    for(ll i=0; i<n; i++)
    {
        ll len = ans.length();
        if(len>0 && ans[len-1] == s[i])
        {
            if(len%2==0) ans += s[i];
            else{
                del++;
            }
        }
        else{
            ans += s[i];
            //cout<<ans<<endl;
        }
    }
    if(ans.length()%2) del++, ans = ans.substr(0, ans.length()-1);

    cout<<del<<endl;
    cout<<ans<<endl;
    
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
