/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 22 2024 11:49:29 PM
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
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll ans = b;
    if(b>=a){
        cout<<b<<endl;
        return;
    }
    else{
        if(d>=c){
            cout<<-1<<endl;
            return;
        }
        else{
            ll baki = a-ans;
            ll times = (baki+c-d-1)/(c-d);
            ans += (c*times);
            cout<<ans<<endl;
            //cout<<times<<endl;
            return;
        }
    }
}

void sir2()
{
    // int y
    int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b)
            cout<<b<<endl;
        else if(a>b)
        {
            long long int ans=0;
            a=a-b;
            ans+=b;
            long long int rem=c-d;
            if(rem<=0)
                cout<<"-1\n";
            else
            {
                if(a%rem==0)
                {
                    ans+=(c*(a/rem));
                }
                else if(a%rem!=0)
                {
                    ans+=(c*((a/rem)+1));
                }
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

