/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 20 2024 12:23:52 AM
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
    sort(arr,arr+n);

    int c = 1;
    int num = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]==num){
            c++;
            if(c==3){
                cout<<arr[i]<<endl;
                return;
            }
        }
        else{
            c = 1;
            num = arr[i];
        }
    }
    cout<<"-1"<<endl;
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
