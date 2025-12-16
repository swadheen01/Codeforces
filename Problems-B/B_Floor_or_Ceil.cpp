/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Mar 15 2025 9:16:32 PM
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

void sir2()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll c = a, d = b;
    ll mx = n, mn = n;
    ll temp = ceil(log2(n));
    
    ll x = min(temp, (a+b));
    //cout<<x<<endl;
    ll y = x;
    if(a+b==0) 
    {
        cout<<n<<" "<<n<<endl;
        return;
    }
    while (x--) {
        if(mx==1) 
        {
            if(a>0) mx/=2,a--;
        }
        else{
            if(mx%2)
            {
                if(b>0) mx = (mx+1)/2, b--;
                else{
                    mx/=2; a--;
                }
            }
            else {
                if(a>0) mx/=2, a--;
                else{
                    mx = (mx+1)/2; b--;
                }
            }
        }
        if(mx==0) break;
    }
    if(mx==1 && a>0) mx = 0;

    while (y--) {
        if(mn%2==0){
            if(d>0) mn/=2, d--;
            else{
                mn/=2; c--;
            }
        }
        else{
            if(c>0) mn/=2, c--;
            else{
                mn = (mn+1)/2;
                d--;
            }
        }

        if(mn==0) break;
        
    }
    if(mn==1 && c>0) mn = 0;
    cout << mn << " " << mx << endl;
}
void sir()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll c = a, d = b;
    ll temp = ceil(log2(n));
    
    a = min(1ll*50, a);
    b = min(1ll*50, b);
    ll x = n;
    c = a, d = b;
    while(a>0 || b>0)
    {
        if(a>0){
            n/=2;
            a--;
        }
        else if(b>0){
            n = (n+1)/2;
            b--;
        }
    }
    ll mx = n;
    while(c>0 || d>0)
    {
        if(d>0){
            x = (x+1)/2;
            d--;
        }
        else if(c>0){
            x/=2;
            c--;
        }
    }
    ll mn = x;
    cout<<mn<<" "<<mx<<endl;
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
