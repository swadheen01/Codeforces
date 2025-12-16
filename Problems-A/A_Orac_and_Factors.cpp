/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Aug 26 2024 11:50:41 PM
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
// bool isprime(ll n)
// {
//     if(n==2 || n==3) return true;
//     else{
//         for(ll i=2; i<=sqrt(n)+1; i++){
//             if(n%i==0) return false;
//         }
//     }
// }

void sir()
{
    ll n,k; cin>>n>>k;
    ll arr[n]={0};
    if(n==2 || n==3) n += n;
    else{
        
        if(n%2==0) n+=2;
        else{
            int flag = 1;
        for (ll i = 3; i <= sqrt(n); i+=2)
            {
                if(n%i==0){
                    n+=i; 
                    flag = 0;
                    break;
                }
            }
            if(flag) n+=n;
        }
            
    }
    k--;
    n = n+(k*2);
    cout<<n<<endl;
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
