/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 17 2024 9:12:10 PM
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

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) return false;
    }
    return true;
}
void sir()
{
    // int y
    ll n; cin>>n;
    if(n<=4) cout<<-1<<endl;
    else{
        vector<int> e,od,p;
        for (int i = 2; i <= n; i += 2) 
            e.push_back(i);
        for (int i = 1; i <= n; i += 2) 
            od.push_back(i);

        int l = e[e.size()-1];
        //cout<<l<<endl;
        if(isPrime(n+1) || isPrime(n)){
            int ind = 0;
            while(isPrime(l+od[0])){
    
                swap(od[0], od[ind]);
                ind++;
            }
        }
    
        for (int x : e) 
            cout << x << " ";
        for (int x : od) 
            cout << x << " ";
        cout << endl;
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
