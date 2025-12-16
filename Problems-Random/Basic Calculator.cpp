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

// ll summ(ll n, ll arr[n])
// {
//     ll sum = 0;
//     for(int i=0; i<n;i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

void sir()
{
    cout<<"WHAT DO YOU WANT TO DO(+, -, *, /, %) ?"<<endl;
    cout<<"Enter the Operator: ";
    string s; cin>>s;
    if(s=="+"){
        cout<<"How much number do you want to add?"<<endl;
        cout<<"Enter the count: ";
        ll n; cin>>n;
        cout<<"Enter the numbers: ";
        ll arr[n]; for(int i=0; i<n; i++) {cin>>arr[i];}

        ll sum = 0;
        for(int i=0; i<n;i++)
        {
            sum += arr[i];
        }
        cout<<"The Sum is "<<sum<<endl;
    }
    else if(s=="-")
    {
        cout<<"Enter the 1st Number: ";
        ll ek; cin>>ek;
        cout<<"Enter the 2nd Number: ";
        ll dui; cin>>dui;
        ll ans = ek - dui;
        cout<<"The Result is: "<<ans<<endl;
    }
    else if(s=="*")
    {
        cout<<"How much number do you want to Multiply?"<<endl;
        cout<<"Enter the count: ";
        ll n; cin>>n;
        cout<<"Enter the numbers: ";
        ll arr[n]; for(int i=0; i<n; i++) {cin>>arr[i];}

        ll ans = 1;
        for(int i=0; i<n;i++)
        {
            ans *= arr[i];
        }
        cout<<"The Result is "<<ans<<endl;
    }
    else if(s=="/")
    {
        cout<<"Enter the 1st Number (Bigger one): ";
        double ek; cin>>ek;
        cout<<"Enter the 2nd Number (Smaller one): ";
        double dui; cin>>dui;
        double ans = ek / dui;
        cout<<"The Result is: "<<ans<<endl;
    }
    else if(s=="%")
    {
        cout<<"Enter the 1st Number : ";
        ll ek; cin>>ek;
        cout<<"Enter the 2nd Number : ";
        ll dui; cin>>dui;
        ll ans = ek % dui;
        cout<<"The Result is: "<<ans<<endl;
    }
    else cout<<"\n # Enter the correct Operator # \n"<<endl;

    cout<<"Do you want to continue?\n"<<endl;
    cout<<"If Yes click 1 else click 0"<<endl;
    int z; cin>>z;
    if(z==1)
    {
        sir();
    }
    else return;
}

int main() {
    //ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}

