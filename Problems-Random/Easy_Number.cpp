/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 05 2025 8:38:38 PM
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

bool check(string s)
{
    ll i=0, j= s.length()-1;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++; j--;
        }
        else return 0;
    }
    return 1;
}

void sir()
{
    string n; cin>>n;
    ll dig = 0;
    for (char c : n) dig += c - '0';
    if(dig%3){
        no;
        return;
    }
    yes;
    string s = n;
    bool chk = check(s);
    if(chk)
    {
        cout<<"Palindrome"<<endl;
        return;
    }
    cout<<"Not a Palindrome"<<endl;
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
