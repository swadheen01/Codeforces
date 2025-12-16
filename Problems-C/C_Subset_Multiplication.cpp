/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 06 2025 9:24:05 PM
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

//2nd approach
void sir()
{
    ll n; cin>>n;
    vector<ll>b(n);
    for (ll &x:b)cin >> x;
    ll lc = 1;

    for(ll i=0;i<n-1; i++)
    {
        if(b[i+1]%b[i])
        {

            ll mult = b[i]/__gcd(b[i],b[i+1]);
            lc = lcm(lc, mult);
        }
    
        
    }
    cout<<lc<<endl;
    

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
