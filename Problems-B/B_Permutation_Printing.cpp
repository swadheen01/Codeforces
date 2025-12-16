/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jan 29 2025 10:58:00 PM
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
    int y
    ll n; cin>>n;
    ll one = n;
    ll two = 1;
    for(ll i=1; i<=n; i++){
        if(i&2) cout<<one--<<" ";
        else cout<<two++<<" ";
    }
    cout<<endl;
    // int x = printf("Hello");
    // printf("%d",x);
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
