/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 05 2025 10:59:13 PM
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
    ll n,k; cin>>n>>k;
    if(k==0)
    {
        while(n--) cout<<0;
        cout<<endl;
        return;
    }
    if(k==n){
        while(n--) cout<<1; cout<<endl;
        return;
    }
    string ans = "";
    ll kk = k;
    while(k--) ans.pb('1');
    
    n = n-(kk);
    //cout<<n<<endl;
    while(n--) ans.pb('0');
    cout<<ans<<endl;

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
