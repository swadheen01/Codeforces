/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 21 2025 2:43:37 AM
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
#define print(vec) for(auto e:vec) cout << e<< " "; cout<<endl
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

string  query(ll mid)
{
    cout<<mid<<endl;
    cout.flush()<<endl;
    string res; cin>>res;

    return res;
}

void sir()
{
    
    ll l = 1, r = 1e6, mid , ans;

    ll k = 25;
    while(l<=r)
    {
        mid = (l+r)/2;
        
        if(query(mid)=="<")
        {
            mid = mid+1;

        }
        else{
            ans = mid;
            mid = mid-1;
        }
    }
    cout<<"! "<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
