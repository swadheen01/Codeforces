/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 22 2024 2:24:28 AM
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
    ll n,b,c; cin>>n>>b>>c;
    if(b==0)
    {
        if(c==n-2||c==n-1) cout<<n-1<<endl;
        else if(c<n-2) cout<<-1<<endl;
        else cout<<n<<endl; return;
    }
    ll av = max((n-c+b-1)/b,0ll);
    cout<<n-av<<endl;
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
