/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jul 19 2024 10:03:07 PM
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
    vector<int>a(5), b(5);
    //int a[5];
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        a.pb(x);
    }
    for(int i=0;i<5;i++)
    {
        int y;
        cin>>y; b.pb(y);
    }
    int p1 = 0;
    int p2 = 0;
    int k = 0;
    vector<int>v(10,0);

    while(p1<5 && p2<5){
        if(a[p1]<=b[p2])
        {
            v[k] = a[p1]; p1++; k++;
        }
        else {v[k]=b[p2]; p2++; k++;

        }
    }
    while(p1<5)
    {
        v[k] = a[p1]; p1++; k++;
    }
    while(p2<5)
    {
        v[k] = b[p2]; p1++; k++;
    }
    for(int i=0; i<10; i++)
    {
        cout<<v[i]<<" ";
    }

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

