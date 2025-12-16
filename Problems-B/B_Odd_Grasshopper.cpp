/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 27 2024 12:32:13 AM
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
    ll x,n; cin>>x>>n;
    // for(ll i=1; i<=n; i++)
    // {
    //     if(x%2){
    //         x += i;
    //     }
    //     else x-=i;
    // }
    // if(x%2){//x odd means plus hobe
    //     if(n%2) x += ((n+1)/2);
    //     else x += (-(n/2));
    // }
    // else{
    //     if(n%2) x -= (-(n+1)/2);
    //     else{
    //         x -= (n/2);
    //     }
    // }
    // ll d = findD(n,x);
    
    // if (x % 2 == 0) {
    //     cout << x + d << endl;
    // } else {
    //     cout << x - d << endl;
    // }
    if(n % 4 == 1){
        if(x%2==0) x -= n;
        else x += n;
        }

    else if(n % 4 == 2){
        if(x%2) x-=1;
        else x+=1;
        }
    else if(n % 4 == 3){
        if(x%2) x -= n+1;
        else x+= n+1;
    }
    cout<<x<<endl;

    
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
// if (j % 4 == 1) {
//         if (n%2 == 0) n -= j;
//         else n += j;
//     }
//     else if (j % 4 == 2) {
//         if (n % 2 == 0) n++;
//         else n--;
//     }  
//     else if (j % 4 == 3) {
//         if (n % 2 == 0) n += j+1;
//         else n -= j+1;
//     }

