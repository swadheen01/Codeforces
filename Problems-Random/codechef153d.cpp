/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 25 2024 8:48:16 PM
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
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    bool ok = true;
    //vector<pair<ll,ll>>vec;
    ll mx=-1;
    ll ind;
    for(ll i=0; i<n; i++)
    {
       
        if((v[i] != i+1)){
            ok = false;
            if(v[i]>mx){
                mx = v[i];
                ind = i;
            }
        }
    }
    if(ok==true || n==1) cout<<0<<endl;
    else{
        
        //ll mx = vec[vec.size()-1].first;

        ll ans = 1 + mx; //SOBAIKE 1 DIYE SWAP KORBO, AGE BOROTAR JAYGAY JE ACHE TAKE, THEN BORO TAKE
        // if(v[mx-1] != 1) ans += v[mx-1];

        // ans += mx;

        //cout<<mx<<endl;
        cout<<ans<<endl;
    }
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
