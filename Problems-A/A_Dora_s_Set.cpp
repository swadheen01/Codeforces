/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Aug 30 2024 8:41:20 PM
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

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;  
    
    
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    
    return true;
}

void sir()
{
    int l,r; cin>>l>>r;
    if(l%2==0) l++;
    int ans = (r-l+2)/4;
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

