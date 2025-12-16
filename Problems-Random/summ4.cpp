/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 04 2024 9:15:34 PM
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
    ll n,x; cin>>n>>x;
    vector<vector<ll>>v;

    for(int i=0; i<n; i++)
    {
        ll a; cin>>a;
        v.pb({a, i+1});
    }
    srt(v);
    for(int i=0; i<n-3; i++)
    {
        for(int j=i+1; j<n-2; j++)
        {
            ll s = j+1; ll e = n-1;
            while(s<e)
            {
                ll summ= (v[i][0] + v[j][0] + v[s][0] + v[e][0]);
                if(summ==x){
                    vector<ll>ans = 
                    {v[i][1],v[j][1], v[s][1], v[e][1]};
                sort(ans.begin(), ans.end());
                for(auto val: ans)
                {
                    cout<<val<<" ";
                }
                return;
            }
                else if(summ>x){
                    e--;
                }
                else s++;
            }
        }
        
    }
    cout<<"IMPOSSIBLE"<<endl;

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
