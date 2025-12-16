/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Apr 15 2025 8:33:18 PM
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
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    sort(v.begin(),v.end());
    ll num = 1;
    ll cnt = 0;
    for(ll i=0; i<n; i++)
    {
        ll e = v[i];
        if(e == num) num++;
        else{
            cnt++;
            e -= num;
            if(e>=num) num++;
            else
            {
                cout<<-1<<endl;
                return;
            }
        }
    }
    num--;
    if(n!=num){
        cout<<-1<<endl;
        return;
    }
    cout<<cnt<<endl; return;
}
void sir2()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    sort(v.begin(),v.end());
    ll num = 1;
    ll cnt = 0;
    set<ll>st;
    for(ll i=0; i<n; i++)
    {
        if((v[i]>=1 && v[i]<=n) && st.find(v[i])==st.end())
        {
            st.insert(v[i]);
        }
        else{
            while(st.find(num)!=st.end()) num++;
            if(num<((v[i]+1)/2)){
                cnt++;
                st.insert(num);
                num++;
            }
            else{
                //cout<<num<<" hi ";
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<cnt<<endl; return;

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
