/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Nov 11 2024 10:02:18 PM
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
    int n; cin>>n;
    vector<int>v(n);
    int mx = -1;
    int zero = 0, one = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]) {one++; if(zero>0) zero--;}
        else {zero++; mx = max(zero,mx);}
    }
    //int ans = max(zero,one);
    cout<<one+mx<<endl;


}
void sir2()
{
    int n; cin>>n;
    vector<int>v(n);
    int one=0;
    for(int i=0;i<n; i++){
        cin>>v[i];
        one+=v[i];
        if(v[i]) v[i] = -1;
        else v[i] = 1;
    }
    int ans = 0, x = 0;
    for(int i=0; i<n; i++)
    {
        x = max(0, x+v[i]);
        ans = max(x, ans);
    }
    
    if(one==n) cout<<n-1<<endl;
    else cout<<one+ans<<endl;
    

}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        //sir();
        sir2();
    }
    return 0;
}
