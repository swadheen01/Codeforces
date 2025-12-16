/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 01 2024 8:38:09 PM
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
    vector<ll>a(2*n);
    ll c1 = 0;
    for(ll i=0; i<2*n; i++){
        cin>>a[i]; 
        if(a[i]==1) c1++;
    }
    ll mx;
    if(n>=c1) mx = c1;
    else if(c1>n) mx = n - (c1-n);
    //mx = min(n,c1)-(abs(n-c1)/2);
    if(c1==2*n) mx = 0;
    ll mn = c1%2;
    cout<<mn<<" "<<mx<<endl;

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
