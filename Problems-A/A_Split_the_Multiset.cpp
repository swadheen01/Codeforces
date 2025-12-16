/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 15 2024 8:41:01 PM
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
#include <iostream>
#include <vector>
using namespace std;

void sir() {
    int n, k;
    cin >> n >> k;
    
    int arr[1000]; 
    int len = 1; 
    arr[0] = n;
    
    int op = 0;
    
    while (len < n) {
        int c = arr[len - 1];
        len--; 
        
        for (int i = 0; i < min(k - 1, c - 1); i++) {
            arr[len++] = 1;
        }
        arr[len++] = c - k + 1; 
        
        op++;
    }
    
    cout << op << endl;
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
