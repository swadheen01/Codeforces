/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Dec 10 2024 8:54:16 PM
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
    string ans = "";
    ll n = s.length();
    vector<int>v(n);
    for(ll i=0; i<n; i++) v[i] = s[i]-'0';
    for(ll i=0; i<n; i++)
    {
        ll mx = v[i];
        ll x = 1;
        ll indx=i;
        while(x<=9 && x<n-i)
        {
            //cout<<x<<" ";
            ll ind = i+x;
            if((v[ind]-x)>=0 && (v[ind]-x)>mx){
                mx =v[ind]-x;
                indx = ind;
            }
            x++;
        }
        while(indx>i){
            v[indx]--;
            swap(v[indx],v[indx-1]);
            indx--;
        }
    }
    for(auto &a:v){
        cout<<a;
    }cout<<endl;
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
