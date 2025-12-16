/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 14 2024 9:16:51 PM
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
    ll n,m,q; cin>>n>>m>>q;
    ll b[m];
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }
    ll dev[q];
    for(ll i=0; i<q; i++)
    {
        cin>>dev[i];
    }
    ll ind = 0;
    sort(b,b+m);
    while(q--)
    {
        ll ans;
        ll d = dev[ind];
        ind++;
        if(d>b[m-1]) ans = n - b[m-1];
        else if(d<b[0]) ans = b[0]-1;
        else{
            ll h,l; h = 1e9;
            //l = 0;
            // for(int i=0; i<m; i++)
            // {
            //     if(d>b[i]) {
            //         l = b[i];
            //         h = b[i+1];
            //         break;}
            // }
            ll low = 0, hi = m-1, mid;
            
            while(low<=hi)
            {
                mid = (hi+low)/2;
                if(d>b[mid]){
                    // l = max(l,b[mid]);
                    // h = b[mid+1];
                    l = mid;
                    low = mid + 1;
                }
                else{
                    // h = min(h,b[mid]);
                    // l = max(l,b[mid-1]);
                    hi = mid-1;
                }
            }
            // ll midv= (l+h)/2;
            ll midv = (b[l]+b[l+1])/2;
            ans = min(midv-b[l], b[l+1]-midv);
        }
        cout<<ans<<endl;
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
