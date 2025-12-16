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

    ll n,q; cin>>n>>q;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;

    ll bs = sqrtl(n)+1;

    vector<ll>block(bs,0);


    for(ll i=0; i<n; i++)
    {
        block[i/bs]+=v[i];
    }

    while(q--)
    {
        ll sum = 0;
        ll l,r; cin>>l>>r;
        l--, r--;

        while(l<=r)
        {
            if(l%bs==0 && l+bs-1<=r)
            {
                sum += block[l/bs];
                l += bs;
            }
            else sum += v[l], l++;

        }
        // while (l <= r && l % bs != 0) {
        // sum += v[l++];
        // }
        // while (l + bs - 1 <= r) {
        //     sum += block[l / bs];
        //     l += bs;
        // }
        // while (l <= r) {
        //     sum += v[l++];
        // }
        cout<<sum<<endl;
    }
    return 0;
}
