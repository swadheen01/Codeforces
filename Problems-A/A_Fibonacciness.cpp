/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jan 19 2025 8:35:14 PM
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
    // int y
    ll a,b,c,d,e; cin>>a>>b>>d>>e;
    //c1 = a+b;
    ll c2 = e-d;
    ll c3 = 0;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

    c = a+b;
    if(a+b==c) cnt1++;
    if(b+c==d) cnt1++;
    if(c+d==e) cnt1++;
    c = d-b;
    if(a+b==c) cnt2++;
    if(b+c==d) cnt2++;
    if(c+d==e) cnt2++;
    c = e-d;
    if(a+b==c) cnt3++;
    if(b+c==d) cnt3++;
    if(c+d==e) cnt3++;
    c = 0;
    if(a+b==c) cnt4++;
    if(b+c==d) cnt4++;
    if(c+d==e) cnt4++;
    
    cnt3 = max(cnt3,cnt4);
    cout<<max(cnt3,max(cnt2,cnt1))<<endl;
    return;

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
