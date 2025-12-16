/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 03 2025 6:06:06 AM
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
    if(s.length()==1)
    {
        cout<<"1 1 1 1"<<endl;
        return;
    }
    map<char,ll>mp;
    for(auto &e:s)mp[e]++;


    ll n = s.length();
    s = '#' + s;

    cout<<1<<" "<<n<<" ";

 
    bool got = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] == '0') {
            got = 1; break;
        }
    }
 
    if (!got) {
        cout << 1 << " " << 1 << endl; return;
    }
    ll ind = n;
    ll zero = 1;
    for (ll i = 1; i <= n; i++) {
    if(s[i] == '0') {
        zero = i;
        ind = i; break;
        }
    }
 
    ll i = ind;
    ll ans = ind;
    while(i <= n && s[i] == '0' && ind > 1) {
        i++; 
        ind--;
    }
 
    cout << ind << " " << n - (zero - ind) << endl;
}

int_fast32_t main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
