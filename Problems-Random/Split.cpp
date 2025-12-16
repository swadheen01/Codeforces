#include <iostream>
#include <string>
using namespace std;


/*
 *Copyhi (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 30 2025 9:00:54 PM
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

bool can(string &s, ll k, ll m) {
    ll n = s.length();
    ll part = 0;
    ll i = 0;
    
    while (i < n) 
    {
        ll z = 0, one = 0, dif = 0;
        
        while(i<n)
        {
            if (s[i]=='0') z++;
            else one++;
            
            dif = max(dif, z-one);
            
            if (one+dif >= m) {
                part++;
                i++;
                break;
            }
            i++;
        }
        if(i==n && one+dif<m) break;
    }
    bool ok = part>=k;
    return ok;
}



void sir() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll lo = 1, hi = s.length();
    ll ans = 1;
    
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (can(s,k,mid)) 
        {
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid-1;
            
    }   
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
