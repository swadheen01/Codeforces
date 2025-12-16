/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jan 07 2025 6:14:49 PM
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
    ll od = 0, ev = 0;
    vector<ll>odd,evv;
    for(auto &a:v){
        cin>>a;
        if(a%2) {od++; odd.pb(a);}
        else {ev++; evv.pb(a);}
    }
    if(od==0 || ev==0){
        cout<<0<<endl;
        return;
    }
    ll ans = 0;
    srt(odd); srt(evv);
    ll mx = odd[odd.size()-1];
    ll c = 0;
    for(auto &e:evv){
        if(e<mx) {
            ans++; mx +=e;
        }
        else{
            if(c==0){
                mx+=evv[evv.size()-1];
                c = 1;
                ans++;
            }
            
            
        }
    }
    cout<<ans+c<<endl;
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
