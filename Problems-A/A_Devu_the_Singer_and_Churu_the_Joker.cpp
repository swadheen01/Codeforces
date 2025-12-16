/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Sep 05 2024 11:41:32 PM
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
    ll n,d;cin>>n>>d;
    ll arr[n];
    ll dev = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        dev += arr[i];
    }
    dev += ((n-1)*10);
    if(dev>d) cout<<-1<<endl;
    else{
        cout<<((n-1)*2) + (d-dev)/5 <<endl;
    }

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
