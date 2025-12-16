/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 14 2024 8:33:59 PM
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
    int a,b,c; cin>>a>>b>>c;
    
    int ans = 0;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    // int mid = arr[1];

    int diff1 = arr[1]-arr[0];
    int diff2 = arr[2]-arr[1];
    if(a==b && b==c) cout<<0<<endl;
    else if(diff1 == 0 || diff2==0)
    {
        cout<<1<<endl;
    }
    else{
        if(max(diff2,diff1)% min(diff1,diff2)==0)
        {
            ans += 1;//for the minimum diff
            ans += (max(diff1,diff2)/(min(diff1,diff2)));
            cout<<ans<<endl;
        }
        else{
            int k = __gcd(diff1, diff2);
            ans += diff1/k;
            ans += diff2/k;
            cout<<ans<<endl;
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
