/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jan 02 2025 9:38:59 PM
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

void Bullet()
{
    ll n;cin>>n;
    vector<ll>v(n);
    ll o=0,one=0,mi=0;
    for(auto &a:v) {
        cin>>a;
        if(a==0)o++;
        else if(a==1)one++;
        else mi++;
    }
    ll sum = 0;

    while(mi>1){
        if(one>0){
            sum++; mi-=2; one--;
        }
        else if(o>0){
            mi-=2; o--;
        }
        else{
            sum--;
            mi-=3;
        }
        
    }

    while(one>2){
        sum++;
        one-=3;
    }
    // if(mi>1){
    //     while(mi>1 && o!=0){
    //     mi-=2;
    //     o--;
    //     }
    // }//mi = 1
    
    if(mi==1 && o>1){
        mi--; o-=2;
    }
    else if(mi==1 && o==1){
        mi--; o--; one--;
    }
    else if(mi==1 && o==0){
        sum--; mi--; one-=2;
    }
    if(o>0 && one>1){
        one-=2; o--;
        
    }
    cout<<sum<<endl;

    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        Bullet();
    }
    return 0;
}
