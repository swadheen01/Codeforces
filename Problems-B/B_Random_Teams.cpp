/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Aug 01 2025 2:22:42 AM
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
    ll n,g; cin>>n>>g;

    ll a = n-g+1;
    ll mx = (a*(a-1))/2;
    ll b = n/g; ll rem = n%g;
    ll one = (b*(b-1))/2; ll two =  ((b+1)*b)/2;
    ll mn = one*(g-rem) + two*rem;
    cout<<mn<<" "<<mx<<endl;
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
