/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Oct 03 2024 9:07:48 PM
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
    int N;
    cin >> N;
    vector<int> v(N);
    int od = 0, ev = 0;

    for (int i = 0; i < N; ++i) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            ev++;
        } else {
            od++;
        }
    }

    int mn = min(od,ev);
    int mx = max(od,ev);
    if(N==1) cout<<"Roy"<<endl;
    else if(od==ev || od==0 || ev==0) {
        cout << "Hridoy" << endl;
    }
    else if(min(od,ev)%2){
        cout << "Roy" << endl;
    }
    
    else{
        if(mn+1<mx) cout<<"Hridoy"<<endl;
        else 
        cout<<"Roy"<<endl;
    }
    // else if(od<ev)
    // {
    //     while(1)
    //     {
    //         od--;
    //         if(od==0) 
    //         {cout<<"Roy"<<endl;
    //         return;}
    //         od--;
    //         if(od==0){
    //             cout<<"Hridoy"<<endl;
    //             return;
    //         }
    //     }
    // }
    // else{
    //     while(1)
    //     {
    //         ev--;
    //         if(ev==0) 
    //         {cout<<"Roy"<<endl;
    //         return;}
    //         ev--;
    //         if(ev==0){
    //             cout<<"Hridoy"<<endl;
    //             return;
    //         }
    //     }
    // }
    
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
