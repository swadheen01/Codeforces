/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Aug 06 2025 9:28:56 PM
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
    ll n,m; cin>>n>>m;
    vector<ll>a(n), b(m);
    for(auto &e:a) cin>>e;
    for(auto &e:b) cin>>e;

    ll i = 0, j = 0; //a=i, b=j;

    vector<ll>aa;
    bool touch =0;
    while(i<n && j<m)
    {
        if(a[i]!=b[j])
        {
            if(a[i]!=b[j]|| a[i]!=b[j+1] || a[i+1]!=b[j]||a[i+1]!=b[j+1])
            {
                aa.pb(a[i]);
                j++;
                i++;
            }
            else j++;

            // if((touch && j<m-1) && b[j+1]==a[i]) 
            // {
            //     //cout<<b[j+1]<<endl;
            //     j++;
            // }
            // else if((touch && (j<m-1 && i<n-1)))
            // {
            //     if(b[j+1]==a[i+1])
            //     {i++; j++;}
            // }
            // else{
            //     //cout<<"Hi"<<" ";
                
            // }

            
        }
        else{
            touch = 1;
            i++;
        }
    }
    //cout<<i<<endl;
    //i++;
    while(i<n)aa.pb(a[i++]);

    for(auto &e:aa) cout<<e<<" ";
    //cout<<aa.size()<<endl;
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
