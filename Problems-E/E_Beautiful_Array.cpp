/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 24 2024 6:15:14 PM
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
    int a,b; cin>>a>>b;
    if(a==b){
        cout<<1<<endl;
        cout<<a<<endl;
        return;
    }
    if(a<0 ||  b<0){
        cout<<3<<endl<<b<<" "<<b<<" "<<(3*a-2*b)<<endl;
        return;
    }
    if(b>a){
    int tin = 9-b*2;
    cout<<3<<endl;
    cout<<b<<" "<<b<<" "<<tin<<endl;
    return;
    }

    int tin = 3*a - 2*b ;
    cout<<3<<endl;
    cout<<b<<" "<<b<<" "<<tin<<endl;
    return;

    

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
