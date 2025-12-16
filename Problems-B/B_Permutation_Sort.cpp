
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 06 2024 11:36:49 PM
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
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[n-1]==n || arr[0]==1)
            {
                cout<<1<<endl;
                return ;
            }
            else if(arr[0]==n && arr[n-1]==1)
            {
                cout<<3<<endl;
                return;
            }
            else{
                cout<<2<<endl;
                return;
            }
        }
    }
    cout<<0<<endl;
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
