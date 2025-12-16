/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 29 2024 10:45:44 PM
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
    int n; cin>>n;
    if(n==3) cout<<"NO"<<endl;
    else if(n%2==0)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            if(i%2) cout<<-1<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int x = (n-2)/2;
        int y = x + 1;
        for(int i=0; i<n; i++)
        {
            if(i%2==0) cout<<x<<" ";
            else cout<<(-1)*y<<" ";
        }
        cout<<endl;
    }
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
