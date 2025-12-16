/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Aug 06 2025 8:31:47 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir2()
{
    ll a,b,aa,bb; cin>>a>>b>>aa>>bb;

    if((a==aa && b==bb) || (a-aa == b-bb))
    {
        yes;
        return;
    }
    if(aa>a && bb>b)
    {
        no;
        return;
    }
    if((a==aa && b!=bb)||(b==bb && a!=aa))
    {
        no;
        return;
    }
    ll d;
    if(aa<a)
    {
        ll ac = a, bc = b;
        while(ac>=aa && bc<=bb)
        {
            ac--;
            bc+=5;
            if(ac-aa==bc-bb)
            {
                yes;
                return;
            }
        }
        no;
        return;

    }
    ll ac = a, bc = b;
    while(ac<=aa && bc>=bb)
    {
        bc-=5; ac++;
        if(aa-ac==bc-bb)
        {
            yes;
            return;
        }
    }
    no;
    return;


}

void sir()
{
    ll a,b,aa,bb; cin>>a>>b>>aa>>bb;

    if((a==aa && b==bb) || (a-aa == b-bb))
    {
        yes;
        return;
    }
    if(aa>a && bb>b)
    {
        no;
        return;
    }
    if((a==aa && b!=bb)||(b==bb && a!=aa))
    {
        no;
        return;
    }

    ll in = 5*a + b;
    ll fin = 5*aa + bb;

    if(in>=fin && (in-fin)%6==0)
    {
        yes;
        return;
    }
    no;
    return;
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
