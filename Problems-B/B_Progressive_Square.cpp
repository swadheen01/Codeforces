/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 21 2024 11:46:09 PM
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
    ll n,c,d; cin>>n>>c>>d;
    vector<ll>a(n*n);
    for(auto &e:a) cin>>e;
    srt(a);
    ll arr[n][n];
    arr[0][0] = a[0];
    //cout<<arr[0][0]<<endl;
    for(ll i=1;i<n;i++)
    {
        arr[i][0] = arr[i-1][0] + c;
        //cout<<arr[i][0]<<endl;
    }
    for(ll j=1; j<n; j++)
    {
        for(ll i=0;i<n; i++)
        {
            arr[i][j] = (arr[i][j-1])+d;
            //cout<<arr[i][j]<<" ";
        }//cout<<endl;
    }
    vector<ll>b(n*n);
    ll ind = 0;
    for(ll i=0;i<n; i++)
    {
        for(ll j=0; j<n; j++){
            //cout<<arr[i][j]<<" ";
            b[ind++] = arr[i][j];
        }//cout<<endl;
    }
    srt(b);
    if(a==b) yes;
    else no;
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
