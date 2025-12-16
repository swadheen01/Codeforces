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
    vector<int>v(n);
    for(auto &e:v) cin>>e;
    int bs = sqrt(n) + 1;
    vector<ll>bsm(bs);

    for(int i=0; i<n; i++)
    {
        bsm[i/bs] += v[i];
    }
    while(q--)
    {
        int tp; cin>>tp;
        int i,x;
        if(tp==1)
        {
            cin>>i;
            cout<<v[i]<<endl;
            bsm[i/bs]-=v[i];
            v[i] = 0;
        }
        else if(tp==2)
        {
            cin>>i>>x;
            bsm[i/bs] +=x;
            v[i] += x;
            //cout<<v[i]<<endl;
        }
        else{
            ll sum = 0;
            int l,r;
            cin>>l>>r;
            while(l<=r)
            {
                if(l%bs==0 && l+bs-1<=r)
                {
                    sum += bsm[l/bs];
                    l+=bs;
                }
                else sum += v[l++];
            }
            cout<<sum<<endl;
        }
    }



    
}

int main() {
    ALLAHU_AKBAR

    int t;
    cin>>t;
    int x=1;
    while(x<=t)
    {
        cout<<"Case "<<x<<":"<<endl;
        x++;
        sir();
    }
    return 0;
}
