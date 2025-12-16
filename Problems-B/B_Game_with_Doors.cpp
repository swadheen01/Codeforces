/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Oct 10 2024 11:24:26 PM
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
    ll l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;
    if(min(r1,r2)-max(l1,l2) + 1 <=0) cout<<1<<endl;
    //else if((l1>l2 && r2>r1)|| (l2<l1 && r2<r1)) cout<<min(r1,r2)-max(l1,l2)+ 1<<endl;
    else {
        int ans = min(r1,r2)-max(l1,l2);
        if(l1!=l2) ans++;
        if(r1 != r2) ans++; 

        cout<<ans<<endl;
    }
}
void sir2()
{
    int l,r,L,R; cin>>l>>r>>L>>R;
    if(r<L || R<l) {cout<<1<<endl; return;}

    vector<ll>room(101,0);
    for(int i=l; i<=r; i++)
    {
        room[i]++;
    }
    for(int i=L; i<=R; i++)
    {
        room[i]++;
    }
    ll ans =0;
    for(int i=1; i<=100; i++)
    {
        if(room[i]==1 && room[i-1]==2)
        {
            ans++;
        }
        if(room[i]==2 && room[i-1]>0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
