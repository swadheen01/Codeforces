/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Sep 23 2024 2:47:38 AM
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
    vector<vector<int>>arr(n,vector<int>(n));
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(n==2){
        cout<<-1<<endl; return;
    }
    else{
        int x = n*n;
        for(int i=0; i<n;i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i%2==0 && j%2==0)
                {
                    arr[i][j] = x;
                    x--;
                }
                else if(i%2==1 && j%2==1)
                {
                    arr[i][j] = x;
                    x--;
                }
            }
        }
        for(int i=0; i<n;i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i%2==0 && j%2==1)
                {
                    arr[i][j] = x;
                    x--;
                }
                else if(i%2==1 && j%2==0)
                {
                    arr[i][j]=x;
                    x--;
                }
            }
        }
        for(int i=0; i<n;i++)
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
