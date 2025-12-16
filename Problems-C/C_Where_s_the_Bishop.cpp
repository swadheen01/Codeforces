/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 22 2024 2:10:21 AM
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

void sir() {
    char arr[8][8];
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }

    int r = -1, c = -1;
    for(int i = 1; i < 7; i++) {  
        for(int j = 1; j < 7; j++) {
            if(arr[i][j] == '#' && 
               arr[i-1][j-1] == '#' &&
               arr[i+1][j-1] == '#' &&
               arr[i-1][j+1] == '#' &&
               arr[i+1][j+1] == '#') {

                cout<<i+1<<" "<<j+1<<endl; 
        
            }
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
