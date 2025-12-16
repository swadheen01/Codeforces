/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 15 2024 12:57:15 AM
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
    string s,ss; cin>>s>>ss;
    ll ans = 0;
    
    int i=0;
    while(i<ss.size() && i<s.size() && s[i]==ss[i]) i++;
    ans = s.size() + ss.size() - max(0,i-1);
    
    cout<<ans<<endl;

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
