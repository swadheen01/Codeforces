/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 22 2024 8:48:52 PM
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
    ll n,a,b,c; cin>>n>>a>>b>>c;
    ll tot = a+b+c;
    ll ans = ((n+tot-1)/tot);
    ll m = ans*tot;
    ll day = ans*3;
    ll arr[] = {c,b,a};
    ll i=0;
    while(m>n){
        day--;
        m-=arr[i];
        i++;

    }
    if(m<n){
        day++;
    }
    cout<<day<<endl;

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
