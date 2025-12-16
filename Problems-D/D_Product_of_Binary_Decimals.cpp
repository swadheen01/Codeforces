/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Feb 01 2025 5:47:47 PM
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
    string N = to_string(n);
    int one = 0, zero = 0;
    for (char c : N) {
        if (c == '1') one++;
        else if (c == '0') zero++;
    }
    
    if (one + zero == N.length()) yes;
    else{
        bool binary = true;
        //binary nums till 10^5
        vector<int> vec = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};
        for(int i = vec.size() - 1; i >= 0; i--){
            while(n > 1){
                if(n % vec[i] == 0){
                    n /= vec[i];
                }
                else break;
            }
        }
        if (n != 1) binary = false;
    if (binary) yes;
    else no;
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
