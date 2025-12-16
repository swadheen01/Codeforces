/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 05 2025 8:38:10 PM
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 205;

void sir() {
    ll a, b, x, y;
    cin>>a>>b>> x>> y;

    if(a>b)
    {
        if((a^1)==b)
        {
            cout<<y<<endl;
            return;
        }
        cout<<-1<<endl;
        return;
    }
    ll ans = 0;
    while(a<b)
    {
        if(a%2)
        {
            ans+=x;
            a++;
        }
        else {
            ans+=min(x,y); a++;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR
    ll t;
    cin >> t;
    while (t--) sir();
    return 0;
}
