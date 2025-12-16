/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jan 19 2025 11:40:35 AM
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
const ll n = 10000000;
vector<bool>prim(n+1, true);
void divisor()
{

    vector<vector<int>>div(n+1,vector<int>());
    for(ll i=1; i<=n; i++) 
    {
        
        for(ll j=i; j<=n; j+=i)
        {

            div[j].pb(i);
        }
    }
    // for(int i=1; i<=10; i++)
    // {
    //     cout<<"Div of "<<i<<" is below: "<<endl;
    //     for(int j = 0; j<div[i].size(); j++)
    //     {
    //         cout<<div[i][j]<<" ";
    //     }cout<<endl;
    // }
    for(ll i=0; i<div[10].size(); i++) cout<<div[10][i]<<endl;
}
void primediv()//finding prime factors
{

    vector<bool>comp(n+1, false);
    vector<vector<int>>pf(n+1,vector<int>());
    comp[0]=comp[1] = true;
    for(ll i=2; i<=n; i++)
    {
        if(comp[i]) continue;
        
        else{
            pf[i].pb(i);
            for(ll j=i+i; j<=n; j+=i)
            {
                comp[j] = true;
                pf[j].pb(i);
            }

        }
       
    }
    for(ll i=2; i<=20; i++){
        cout<<"Prime fact. of "<<i<<" is below: "<<endl;
        for(ll j=0; j<pf[i].size(); j++)
        {
            cout<<pf[i][j]<<" ";
        } cout<<endl;
        
    }
}
void findlp()//finding prime factors (lowest+highest)
{

    vector<bool>comp(n+1, false);
    //vector<vector<int>>lp(n+1,vector<int>());
    vector<int>lp(n+1);
    vector<int>hp(n+1);
    comp[0]=comp[1] = true;
    for(ll i=2; i<=n; i++)
    {
        if(comp[i]) continue;
        
        else{
            lp[i]=hp[i]=i;
    
            for(ll j=i+i; j<=n; j+=i)
            {
                comp[j] = true;
                if(lp[j]==0) lp[j]=i;
                hp[j] = i;  //for highest
            }

        }
       
    }
    
    cout<<hp[999]<<" "<<lp[999]<<endl;
    for(ll j=2; j<=20; j++)
    {
        cout<<"Low & hi PM fact.of "<<j<<" is "<<lp[j]<<" "<<hp[j]<<endl;;
    } cout<<endl;
}
void sir()//finding prime factors
{

    vector<bool>comp(n+1, false);
    vector<vector<int>>pf(n+1,vector<int>(8));
    comp[0]=comp[1] = true;
    for(ll i=2; i<=n; i++) //i*i will also work
    {
        if(comp[i]) continue;
        
        for(ll j=i+i; j<=n; j+=i)
        {
            comp[j] = true;
            pf[j].pb(i);
        }
    }
    for(ll i=2; i<=100; i++){
        if(!comp[i]) cout<<i<<" ";
        
    }
}
void seive()
{
    prim[0]=prim[1] = false;
    
    //I is a prime & and J is a multiple of i
    for(ll i=2; i<=n; i++) //i*i will also work
    {
        if(!prim[i]) continue;
        
        for(ll j=i*i; j<=n; j+=i)
        {
            prim[j] = false;
        }
    }
    for(ll i=2; i<=100; i++){
        if(prim[i]) cout<<i<<" ";
    }
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        //sir();
        //seive();
        //primediv();
        //findlp();
        divisor();
    }
    return 0;
}
