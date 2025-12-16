/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Nov 25 2024 10:53:35 PM
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
    ll n; cin>>n;
    vector<ll>v(n);
    set<ll>s;
    for(ll i=0; i<n; i++) {
        cin>>v[i]; s.insert(v[i]);
    }
    srt(v);
    //if(s.size()==1 || (v[0]==1 && s.size()%2==1) || (v[0]%2==0 && v[n-1]%2==1))
    if(v[0]>1 || s.size()==1){
        cout<<"Alice"<<endl;return;
    }
    v.erase(unique(v.begin(), v.end()), v.end());

    ll cur = 0;
    for (ll i = 1; i < v.size(); i++) {
        cur ^= 1;
        if (v[i] - v[i - 1] != 1) break;
    }
    cout << (cur ? "Bob\n" : "Alice\n");
    
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
