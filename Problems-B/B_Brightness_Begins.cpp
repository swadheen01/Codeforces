/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 29 2024 10:13:04 PM
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
    ll k; cin>>k;
    ll lo = 1, hi = 2e18, ans = 0;
    while(lo<=hi)
    {
        ll mid = (lo+hi)/2;
        //ll sqmid = ceil(sqrt(mid));
        ll sqmid = sqrtl(mid);
        
        // while(sqmid*sqmid>mid) sqmid--;//boro oile kombo

        // while((sqmid+1)*(sqmid+1)<=mid) sqmid++;

        ll cnt = mid-sqmid;

        if(cnt>=k){
            ans = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    cout<<ans<<endl;
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
