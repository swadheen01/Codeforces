/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 20 2024 3:33:41 PM
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
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll sum1 = 0;
    ll sum2 = 0;
    if(n%2){
        for(int i=0; i<n; i++){

            if(i == (n/2)){
                continue;
            }
            else if(i%2) {sum1 += v[i];}
            else {sum2 += v[i];}
        }
        if(sum1<sum2) sum1 += v[n/2];
        else sum2 += v[n/2];
    }
    else{
        for(int i=0; i<n/2-1; i++){
            if(i%2) {sum1 += v[i];sum1 += v[n-i-1];}
            else {sum2 += v[i]; sum2 += v[n-i-1];}
        }
        if(sum1<sum2) {
            sum1 += v[n/2];
            sum2 += v[n/2-1];
        }
        else {
            sum2 += v[n/2];
            sum1 += v[n/2-1];
        }

    }
    
    cout<<abs(sum1-sum2)<<endl;

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}


