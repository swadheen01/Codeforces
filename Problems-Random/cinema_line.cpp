/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Dec 27 2024 11:16:18 PM
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
    ll n; cin>>n;
    vector<ll>vec(n);
    for(auto &a:vec) cin>>a;
    ll have = 0;
    ll a=0,b=0, c=0;

    for(auto &e:vec){
        if(e==25) a++;
        if(e==50){
            if(a==0){
                cout<<"NO"<<endl;
                return;
            }
            b++;
            a--;
        }
        if(e==100){
            c++;
            if(b>0 && a>0){
                b--; a--;
            }
            else if(a>=3){
                a-=3;
            }
            else{
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
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
