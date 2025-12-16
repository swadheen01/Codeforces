/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 1:53:53 AM
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

void print(ll n)
{
    if(n<10)
    {
        cout<<n<<" ";
        return;
    }
    print(n/10);
    cout<<n%10<<" ";


}

void sir()
{
    ll n; cin>>n;
    if(n==0) cout<<0<<endl;
    else 
    {
        print(n);
        cout<<endl;
    }
      
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;;
    while(t--)
    {
        sir();
    }
    return 0;
}
