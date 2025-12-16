/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Dec 25 2024 12:06:45 AM
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
    string a,b; cin>>a>>b;
    ll f,j; f = a.length(); j = b.length();
    //if(f<j) swap(a,b), swap(f,j);
    ll ans = 0;
    for(ll i=0; i<f; i++)
    {
        for(ll k = 0; k<j; k++)
        {
            
            if(a[i]==b[k]){
                ll c=0;
                ll i1 = i, i2 = k;
                while((i1<f && i2<j)&& a[i1]==b[i2]){
                    c++;
                    i1++; i2++;
                }
                //cout<<a[i]<<" "<<c<<endl;
            ans = max(c,ans);
            }
        }
    }
    cout<<(f+j)-(2*ans)<<endl;
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
