/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Apr 06 2025 9:30:07 PM
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

void sirA()
{
    ll a,b,c; cin>>a>>b>>c;
    cout<<max(0ll,a-c)<<" ";
    if(c<=a)cout<<b<<endl;
    else cout<<max(0ll, (b-(c-a)))<<endl;
}
void sirB()
{
    ll l,r,x; cin>>l>>r>>x;

    ll lo=l, hi = r, mid;
    while(lo<=hi)
    {
        mid = lo + (hi-lo)/2;
        if((x + mid)>=l && (x+mid)<=r)
        {
            cout<<x+mid<<" "<<mid<<endl;
            return;
        }
        if((x + mid)<l){
            lo = mid + 1;
        }
        else if((x + mid)>r){
            hi = mid - 1;
        }
    }
    cout<<-1<<" "<<-1<<endl;
    return;
}
void sirC()
{
    ll n,k,d; cin>>n>>k>>d;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    vector<ll>ps(n+1);
    ll ind = -1;
    ps[0] = 0;
    for(ll i=0; i<n; i++)
    {
        ps[i+1] = v[i] + ps[i];
    }
    //check 1
    //for(auto &s:ps) cout<<s<<" "; cout<<endl;
    
    for(ll i=1; i<=n-k+1; i++)
    {
        if((ps[i+k-1]-ps[i-1])==k)
        {
        
            if(k%d==0)
            {
                //cout<<ps[i+k-1]<<" "<<ps[i-1]<<endl;
                cout<<i<<endl;
                return;
            }
            // else{
            //     cout<<-1<<endl;
            //     return;
            // }
            
            
        }
    }
    //cout<<ps[5]<<":"<<ps[7]<<endl;
    //chk 0
    for(ll i=1; i<=n-k+1; i++)
    {
        ll ss = (ps[i+k-1]-ps[i-1]);
        if(ss%d==0)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sirC();
    }
    return 0;
}
