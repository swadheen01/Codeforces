/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Oct 17 2024 12:15:19 AM
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
    string s; cin>>s;
    ll n = s.size();
    for(ll i=n-2; i>=0; i--)
    {
        ll a = s[i]-'0';
        ll b = s[i+1]-'0';
        ll x = a+b;
        if (x >= 10) {
            cout << s.substr(0, i) << x << s.substr(i + 2) << '\n';
            return;
        }
  }
    cout << (s[0] - '0' + s[1] - '0') << s.substr(2) << '\n';
    //      if(x>=10){
    //         string b = to_string(x);
    //         s[i] = '1';
    //         s[i+1] = b[1];
    //         cout<<s<<endl;
    //         return;
    //     }
    // }
    // ll last = s[0]-'0' + s[1]-'0';
    // ll n = s.size();
    // cout<<last;
    // for(ll i=2; i<n; i++)
    // {
    //     cout<<s[i];
    // }cout<<endl;

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
