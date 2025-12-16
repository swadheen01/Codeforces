/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 30 2025 4:12:17 AM
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
    string l,r; cin>>l>>r;

    ll mc = 0; ll ind = -1;
    for(ll i=0; i<l.length(); i++)
    {
        if(l[i]==r[i]) mc++, ind = i;
        else break;
    }

    if(l.length()==1)
    {
        if(r[0]-l[0]>1)
        {
            cout<<0<<endl;
            return;
        }
        else if(r[0]-l[0]==1)
        {
            cout<<1<<endl;
            return;
        }
        cout<<2<<endl;
        return;

    }
    ind++;

    ll ans = 0;
    if(r[ind]-l[ind]>1)
    {
        ans += (2*mc);
        cout<<ans<<endl;
        return;
    }

    if(ind>=l.length())
    {
        cout<<2*mc<<endl;
        return;
    }

    ll add = 1;

    ll cont = 0;
    ll cont2 = 0;
    ll in = ind+1;
    if(l[in]=='9' && r[in]=='0')
    {
       
        cont = 1;
        char c = l[in++];
        while(l[in]==c) cont++, in++; 

        ll in2 = ind+1;
        cont2 = 1;

        char c2 = r[in2++];
        while(r[in2]==c2) cont2++, in2++;

    }
    
    
    cout<<2*mc + add + min(cont, cont2)<<endl;



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
