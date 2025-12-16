/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jun 09 2024 11:07:10 PM
 */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void sir()
{
    string s; cin>>s;
    bool yes = true;
    if(s[0] != '1')
    {
        yes = false;
    }
    else{
        for(int i=1; i<s.size();i++)
        {
            if(i != s.size()-1)
            {
                if(s[i]=='0'){
                    yes = false;
                    break;
                }
            }
            else{
                if(s[i]>'8'){
                    yes = false;
                }
            }
        }
    }
    if(yes) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        sir();
        
    }
    return 0;
}