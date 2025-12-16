/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Mar 16 2025 1:54:30 AM
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
    ll a,s; cin>>a>>s;

    string ans = "";
    while(s>0)
    {
        ll big=s%10;
        ll small = a%10;
        s/=10, a/=10;
        if(s==0 && a>0)
        {
            cout<<-1<<endl;
            return;
        }

        if(big<small){
            if(s==0)
            {
                cout<<-1<<endl;
                return;
            }
            big += (10*(s%10)); s/=10;
            if(big>18 || big<10)
            {
                cout<<-1<<endl;
                return;
            }
        }
        ll tem = big-small;
        if(tem>9)
        {
            cout<<-1<<endl;
            return;
        }
        ans += to_string(tem);
    }
    if(a)
    {
        cout<<-1<<endl;
        return;
    }
    reverse(ans.begin(), ans.end());

    cout<<stoll(ans)<<endl;
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
