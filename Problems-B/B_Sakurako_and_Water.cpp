/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jan 01 2025 7:34:34 PM
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
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
 
    int ans=0;
 
    vector<int> mn(n*2-1,INT_MAX);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mn[i-j+(n-1)]=min(mn[i-j+(n-1)],arr[i][j]);
        }
    }
 
    for(int i=0; i<mn.size(); i++){
        if(mn[i]<0){
            ans+=abs(mn[i]);
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
        sir();
    }
    return 0;
}
