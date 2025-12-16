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
    // Bismillahir Rahmanir Rahim 

    int n,q; cin>>n>>q;
    vector<ll>v(n); for(auto &e:v) cin>>e;

    int bs = sqrtl(n) + 1;
    vector<ll>blc(bs);
    while(q--)
    {
        int tp; cin>>tp;
        if(tp==2)
        {
            int k; cin>>k; k--;
            cout<<v[k]+blc[k/bs]<<endl;
        }
        else{
            int a,b; int u; cin>>a>>b>>u;
            a--,b--;
            while(a<=b)
            {
                if(a%bs==0 && a+bs-1<=b)
                {
                    blc[a/bs] += u;
                    a+=bs;
                }
                else v[a]+=u, a++;
            }
        }
    }
  
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
