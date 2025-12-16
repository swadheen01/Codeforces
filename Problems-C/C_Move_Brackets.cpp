/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 20 2024 2:06:48 AM
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
unordered_map<char,int> sym = {{'(', -1}, {')',1}, {'[',-2},{']',2}, {'{', -3}, {'}', 3}};
string isBalanced(string s)
{
    // int y
    stack<char>st;
    for(char brc : s)
    {
        if(sym[brc]<1){
            st.push(brc);
        }
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(sym[top]+ sym[brc] != 0)
            return "NO";
        }
    }
    if(st.empty()) return "YES";
    else return "NO"; 
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        string s; cin>>s;
        cout<<isBalenced(s)<<endl;;
    }
    return 0;
}
