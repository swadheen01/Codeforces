/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 14 2024 9:39:45 PM
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
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> a(n, 0);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if(a[i]>0) continue;
        ans++;

        int j=i+arr[i];
        while(j<n)
        {
            a[j] += 1;
            if(a[j]>1) break;
            j += (arr[j]);
        }
    }

    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) {

        if(i+arr[i]<n && a[i+arr[i]] == 1 ) cout<<ans + 1<<" ";
        else cout<<ans<<" ";    
    } cout<<endl;
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
