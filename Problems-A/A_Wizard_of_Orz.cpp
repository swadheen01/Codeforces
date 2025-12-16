/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 08 2024 11:33:38 PM
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
    int n; cin>>n;
    int x = 0;
    string num = "989";
    if(n==1) cout<<9<<endl;
    else if(n==2) cout<<98<<endl;
    else{
        n-=3;
        while(n)
    {
        if(x>9) x = 0;
        num.pb('0'+x);
        x++;
        n--;
    }
    cout<<num<<endl;
    }
    
    
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
