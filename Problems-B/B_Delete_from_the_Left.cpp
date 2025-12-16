/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Nov 04 2024 11:58:09 PM
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
    // int y
    string s,t;
    cin>>s;
    cin>>t;
    int s1=s.size();
    int t1=t.size();
    if(s1<t1) {swap(s,t);swap(s1,t1);}
    int c=0;
    int ind=s1-1;
    for(int i=t1-1;i>=0;i--)
    {
        if(s[ind]==t[i]){c++;ind--;}
        else{
            break;
        }
    }
     s1-=c;
     t1-=c;
     cout<<s1+t1<<endl;
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
