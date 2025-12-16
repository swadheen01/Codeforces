/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 21 2024 9:27:23 PM
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

void BinarySearch()
{
    ll n; cin>>n;
    vector<ll>v(n);
    ld sum = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(n<=2){
        cout<<-1<<endl;
        return;
    }
    srt(v);
    ll l=0,hi,mid;
    hi = 1e18 - sum;
    ll x;
    while(l<=hi)
    {
        mid = (l+hi)/2;
        ld avg = ceil((sum+mid)/n);
        avg = avg/2;
        if(avg>v[n/2])
        {
            x = mid;
            hi = mid-1; 
        }
        else l = mid+1;


    }
    cout<<x<<endl;
}
void sir()
{
    // int y
    long double n; cin>>n;
    vector<int>v(n);
    long double summ = 0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        summ += v[i];
    }
    if(n==1 || n==2) {cout<<-1<<endl; return;}
    long double avg = summ/n;
    sort(v.begin(), v.end());

    if(v[n/2]<avg/2.0){
        cout<<0<<endl;
        return;
    }
    
    long double summ2 = 2*n*v[n/2];
    ll ans = summ2-summ+1;
    cout<<ans<<endl;
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        BinarySearch();
    }
    return 0;
}
