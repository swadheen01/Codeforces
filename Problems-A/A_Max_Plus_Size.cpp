/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 27 2024 7:36:35 PM
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
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int mx = 0;
    for (int st = 0; st < n; ++st) {
        int mxr = 0, cnt = 0;

    
        for (int i = st; i < n; i += 2) {
            mxr = max(mxr, a[i]);
            ++cnt;
        }

        
        mx = max(mx, mxr + cnt);
    }

    cout << mx << endl;
    
}

void sir2()
{
    // int y
    int n; cin>>n;
    vector<int>arr(n);
    int mx=-1;
    int ind;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=mx){
            mx = arr[i];
            ind = i;
        }
    }
    if(n%2==0) cout<<mx+n/2<<endl;
    else{
        if(ind%2==0) cout<<mx+(n+1)/2<<endl;
        else {
            int mx2 = -1;
            for(int i=0; i<n; i+=2)
            {
                if(arr[i]>=mx2){
                    mx2 = arr[i];
                }
            }
            cout<<mx2 + (n+1)/2<<endl;
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