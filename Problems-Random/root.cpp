/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 15 2024 3:45:24 AM
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
    int low = 1; int high = n;
    int mid, root=0;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(mid*mid==n) {root = mid; break;}
        else if(mid*mid>n) high = mid-1;
        else low = mid+1;
    }
    cout<<root<<endl;
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
