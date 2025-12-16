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

    vector<int>v(n); for(auto &e:v) cin>>e;

    int sz = sqrt(n) + 1;
    vector<ll>blc(sz);
    for(int i=0; i<n; i++)
    {
        blc[i/sz] += v[i];
    }
    while(q--)
    {
        int tp; cin>>tp;
        int a,b,x;
        if(tp==1)
        {
            cin>>a>>b>>x;
            a--, b--;
            while(a<=b)
            {
                if(a%sz==0 && a+sz-1<=b)
                {
                    blc[a/sz] += (sz*x);
                    a+=sz;
                }
                else{
                    v[a]+=x;
                    a++;
                }
            }
    
        }
        else if(tp==2)
        {
            cin>>a>>b>>x; a--, b--;

            while(a<=b)
            {

                if(a%sz==0 && a+sz-1<=b)
                {
                    blc[a/sz] = (x*sz);
                    a+=sz;
                }
                else{
                    blc[a/sz] += (x-v[a]);
                    v[a] = x;
                    a++;
                }
            }
            
        }
        else{
            ll sum = 0;
            cin>>a>>b; a--,b--;
            while(a<=b)
            {
                if(a%sz==0 && a+sz-1<=b)
                {
                    sum += blc[a/sz];
                    a+=sz;
                }
                else{
                    sum += v[a];
                    a++;
                }
            }
            cout<<sum<<endl;
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
