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

// void sir()
// {
//     // Bismillahir Rahmanir Rahim 

    
//         // tp==1;
//         // if(tp==1)//sum er kaj
//         // {
            
//         // }
//         // else{
//         //     ll i,x; cin>>i>>x;
//         //     block[i/bs]+=x-v[i];    //ager ta minus, new ta plus
//         //     v[i] = x;
//         // }
//     }
// }

int main() {
    ALLAHU_AKBAR

    int n; cin>>n;
    vector<int>v(n);
    for(auto &e:v) cin>>e;

    int bs = sqrt(n)+1;

    vector<int>block(bs);


    int mn = 1e7;
    for(int i=0; i<n; i++)
    {
        if(i%bs==0) mn = 1e7;
        
        block[i/bs]=min(mn,v[i]);
        mn = block[i/bs];
        
        
    }

    int q; cin>>q;
    while(q--)
    {
        int ans = 1e18;
        int l,r; cin>>l>>r;


        while(l<=r)
        {
            if(l%bs==0 && l+bs-1<=r)
            {

                ans = min(ans,block[l/bs]);
                l += bs;
            }
            else 
            {
                ans = min(ans, v[l++]);
  
            }

        }

        cout<<ans<<endl;
    }
    return 0;
}
