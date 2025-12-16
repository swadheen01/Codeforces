/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun May 04 2025 7:17:58 PM
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
    ll n,a,b; cin>>n>>a>>b;

    if(a+b+2>n || abs(a-b)>1)
    {
        cout<<-1<<endl;
        return;
    }
    int left=1,right=n;
    int f = (a>b);
    for(ll i=1; i<=n; i++)
    {
        if(f==0){cout<<right--<<" ";}
        else cout<<left++<<" ";
        if(i<=a+b)f=!f;
    } cout<<endl;
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
