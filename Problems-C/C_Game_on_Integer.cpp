/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 14 2025 9:36:30 PM
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

    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;

    rsrt(v);
    ll ans = 0;
    ans += v[0];
    ans -= v[1];
    for(ll i=2;i<n; i++)
    {
        if(i%2==0)
        {
            ll now = ans + v[i];
            if(now<ans) break;

            else ans += v[i];
            
        }
        else{
            ll now = ans-v[i];
            if(now>ans) break;
            // else if(now+v[i+1]>ans) break;
            else{
                ans-=v[i];
            }
        }
        // if(i==n-2)
        // {
        //     i++;
        //     if(i%2)
        //     {
        //         ll now = ans - v[i];
        //         if(now>ans) break;
        //         else ans-=v[i];
        //     }
        //     else{
        //         ll now = ans+v[i];
        //         if(now<ans) break;
        //         else ans += v[i];
        //     }
        // }
        
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
