/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 25 2024 8:40:13 PM
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
    ll r,g,b;  cin>>r>>g>>b;
    bool ok = true;
    if((g+b)<r) {ok = false;}
    else if((r+b)<g){ok = false;}
    else if((r+g)<b){ ok = false;}

    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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
