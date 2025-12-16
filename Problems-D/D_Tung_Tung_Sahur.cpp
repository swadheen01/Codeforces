/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Apr 13 2025 10:21:30 PM
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
    string p,s;cin>>p>>s;
    vector<ll>v,v2;
    // ll cl = 0, cr = 0;
    // cl += (p[0]=='L');
    // cr += (p[0]=='R');
    string ss = ""; string sss = "";
    for(ll i=0; i<p.length();i++)
    {
        ll cl = 0;
        ll cr = 0;
        if(p[i]=='L')
        {
            while(p[i]!='R' && i<p.length())
            {
                cl++;
                i++;
            }
            i--;
            //cout<<cl<<endl;
            v.pb(cl);
            ss+='L';
        }
        
        else{
            
            while(p[i]!='L' && i<p.length())
            {
                cr++;
                i++;
            }
            i--;
            v.pb(cr); 
            ss+='R';
        
        }
    }
    //for(auto &e:v) cout<<e<<" ";cout<<endl;
   
    for(ll i=0; i<s.length();i++)
    {
        ll cl = 0;
        ll cr = 0;
        if(s[i]=='L')
        {
            while(s[i]!='R' && i<s.length())
            {
                cl++;
                i++;
            }
            i--;
            //cout<<cl<<endl;
            v2.pb(cl);
            sss+='L';
        }
        
        else{
            
            while(s[i]!='L' && i<s.length())
            {
                cr++;
                i++;
            }
            i--;
            v2.pb(cr);
            sss+='R';
            
        }
    }
    //for(auto &e:v2) cout<<e<<" ";
    //cout<<ss<<" "<<sss<<endl;
    if(ss !=sss)
    {
        no; return;
    }
    if(v.size() != v2.size())
    {
        no;
        return;
    }
    for(ll i=0;i<v.size(); i++)
    {
        if(v2[i]>(2*v[i]) || v2[i]<v[i])
        {
            no;
            return;
        }
    }
    yes;
    return;
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
