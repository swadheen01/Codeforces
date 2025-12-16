/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 20 2024 12:35:09 AM
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
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    int od = arr[0]%2;
    int ev = arr[1]%2;
    
    for(int i=0; i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2 != od){
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(arr[i]%2 != ev)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;

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
