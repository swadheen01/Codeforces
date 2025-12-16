/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 19 2025 11:16:29 PM
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
    ll a,b; cin>>a>>b;

    ll c = a|b;
    ll ans1 = abs(b-c) + 1;

    ll ans2 = abs(b-a);

    if(a>b) swap(a,b);
    ll ans3 = 0;
    for(ll i=a; i<=b; i++)
    {
        if(i==b)
        {
            break;
        }
        else{
            if(i|b == b)
            {
                ans3++; break;
            }
            ans3++;
        }
    }
    

    cout<<min(ans1, min(ans3,ans2))<<endl;
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
