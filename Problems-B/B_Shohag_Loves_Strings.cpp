/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 23 2024 10:49:27 PM
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
    // ll y
    string s;
    cin >> s;
    ll n = s.size();
    string ans = "-1";
    ll flag = 0;
    

    for(ll i=0; i < n-1; i++){
        char a = s[i];
        char b = s[i+1];
        if(a== b){
            ans = s.substr(i, 2);
            flag = 1;
            break;
            //return;
        }
    }
    
    if(!flag){
        for(ll i=0; i < n-2; i++){
        
            if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]){
                ans = s.substr(i, 3);
                flag = 1;
                break;
            }
        }
    }
    cout << ans << "\n";
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
