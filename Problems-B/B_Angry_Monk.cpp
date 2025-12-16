/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 11 2024 8:50:30 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n>> k;
        ll arr[k];
        for(ll i=0; i<k; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+k);
        ll res = 0;
        for(ll i=0;i<k-1; i++)
        {
            if(arr[i]==1) res++;
            else res += arr[i]*2-1;
        }
        
        cout << res << endl;
    }
    return 0;
}
