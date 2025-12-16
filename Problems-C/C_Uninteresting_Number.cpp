/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Dec 05 2024 11:20:37 PM
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
    string s; cin>>s;
    ll sum = 0;
    ll two = 0, thr = 0;
    ll n = s.length();
    for(ll i=0; i<n; i++)
    {
        sum += s[i]-'0';
        if(s[i]=='2') two++;
        if(s[i]=='3') thr++;
    }
    if(sum%9==0){
        cout<<"YES\n";
        return;
    }
    
    ll dorkar = (sum/9+1) * 9 - sum;
    if(dorkar%2) dorkar+=9;
    while(dorkar-6>=0 && thr>0) dorkar-=6, thr--;
    while(dorkar-2>=0 && two>0) dorkar-=2, two--;

    if(dorkar==0){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";


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
