/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 23 2024 2:09:05 PM
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

    ll x;
    string s;
    while(cin >>x) {
        cin.ignore();
        getline(cin,s);
        string ans ="";
        ll n= s.length();
        vector<pair<int,int>>v;
        string sin;
        for(ll i=0; i<n; i++)
        {
            string c,e;
            if(s[i]=='x'){
                ll ind = i-1;
                while(s[ind] != ' ' || ind>=0){
                    c.pb(s[ind]);
                    ind--;
                }
                reverse(c.begin(),c.end());
                
                ll ind2 = i+1;
                while(s[ind2] != ' ' || ind2<n)
                {
                    e.pb(s[ind2]);
                    ind2++;
                }
                reverse(e.begin(), e.end());
                

                v.pb({stoi(c),stoi(e)});

            }
            if(s[i]=='+'|| s[i]=='-'){
                sin.pb(s[i]);
            }

        }
        ll ind = 0;
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i].first*v[i].second<<'x'<<v[i].second-1<<sin[ind]<<" ";
        }

    }
    
    

    
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
