/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Sep 23 2024 2:11:13 AM
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
    int arr[n][n];
    if(n==1){
        cout<<1<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<-1<<endl;
        return;
    }
    else{
        arr[0][0] = 1;
        arr[n-1][n-1] = n*n;
        int x = n*n - 1;
        for(int i=1; i<n-1; i++)
        {
            for(int j = i; j>=0; j--, x--)
            {
                arr[i-j][j] = x;
            }
        }
        x = 2;
        for(int j=n-2; j>0; j--)
        {
            for(int i=0;i<n-j; i++,x++)
            {
                arr[n - i - 1][j + i] = x;
            }
        }
        for (int i = n - 1; i >= 0; i--, x++) 
        {
            arr[i][n - i - 1] = x;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<arr[i][j]<<" ";
            } cout<<endl;
        }
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
