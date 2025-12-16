/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 28 2025 8:51:37 PM
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

// void sir2()
// {
//     ll n; cin>>n;
//     ll chk = n*(n+1)/2;
//     //cout<<chk<<endl;
//     ll sq = sqrt(chk);
//     if(sq*sq==chk)
//     {
//         cout<<-1<<endl;
//         return;
//     }
//     vector<ll>big;
//     vector<ll>sm;
//     for(ll i=n; i>=(n+1)/2; i--)
//     {
//         big.pb(i);
//     }
//     for(ll i=1; i<=(n+1)/2; i++)
//     {
//         sm.pb(i);
//     }
//     ll ind = 0;
//     ll indd = 0;
//     for(ll i=0; i<n; i++)
//     {
//         if(i%2) cout<<sm[ind++]<<" ";
//         else cout<<big[indd++]<<" ";
//     }
//     cout<<endl;

// }
void sir3()
{
    ll n; cin>>n;
    ll chk = n*(n+1)/2;
    //cout<<chk<<endl;
    ll sq = sqrt(chk);
    if(sq*sq==chk)
    {
        cout<<-1<<endl;
        return;
    }
    vector<ll>ev,od;
    for(ll i=2; i<=n; i+=2)
    {
       ev.pb(i);
    }
    for(ll i=1; i<=n; i+=2) od.pb(i);
    if(n>4) rsrt(od);
    
    ll ind = 0, in = 0;
    for(ll i=0; i<n; i++)
    {
        if(i%2==0 && ind < ev.size()) cout<<ev[ind++]<<" ";
        else if(in < od.size()) cout<<od[in++]<<" ";
    }
    cout<<endl;
}
void sir()
{
    ll n; cin>>n;
    ll chk = n*(n+1)/2;
    //cout<<chk<<endl;
    ll sq = sqrt(chk);
    if(sq*sq==chk)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<2<<" "<<1<<" ";
    ll sum = 3;
    if(n==2) return;
    for(ll i=3; i<=n; i++)
    {
        sum += i;
        ll x = sqrt(sum);
        if(x*x==sum){
            sum += (i+1);
            cout<<i+1<<" "<<i<<" ";
            i++;
        }
        else{
            cout<<i<<" ";
        }

    }
    cout<<endl;
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
