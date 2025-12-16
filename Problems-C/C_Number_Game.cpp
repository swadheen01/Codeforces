/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Aug 20 2025 3:33:31 AM
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
    if(n==1)
    {
        cout<<"FastestFinger\n";
        return;
    }
    if(n&1 || n==2)
    {
        cout<<"Ashishgup"<<endl;
        return;
    }

    if((n & (n-1))==0)
    {
        cout<<"FastestFinger\n";
        return;
    }
    ll ok = true;

    if(n%4 != 0)
    {
        ll p = n/2; bool pr = true;
        for(ll i=2; i*i<=p; i++)
        {
            if(p%i==0)
            {
                pr = false;
                break;
            }
        }
        if(pr)
        {
            cout<<"FastestFinger\n";
            return;
        }
    }
    cout<<"Ashishgup"<<endl;
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
