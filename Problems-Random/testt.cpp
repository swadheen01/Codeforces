/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jul 23 2024 7:27:34 PM
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
    string s; cin>>s;
    int n = s.length();

    vector<int>v;
    vector<char>c;

    string num;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i] == '*' || s[i]=='/')
        {
            v.push_back(stoi(num));
            num = "\0";
            c.push_back(s[i]);
        }
        else{
            num.push_back(s[i]);
        }
    }
    v.push_back(stoi(num));   //for the last number

   int vs = v.size();
   int cs = c.size();

    //check v c
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    } cout<<endl;

    for(int i=0; i<c.size(); i++)
    {
        cout<<c[i]<<" ";
    } cout<<endl;

    //For Division
    vector<int>v2;
    vector<char>c2;

    for(int i=0; i<cs; i++)
    {
        int div;
        if(c[i]=='/')
        {

            div = v[i]/v[i+1];
            int j = i+1;
            while(c[j]=='/')
            {
                div = div/v[j];
                j++;
                i++;
            }
            v2.push_back(div);
            //v[i+1] delete;
            //c[i] delete;
            // for(int j = i+1; j<vs-1; j++)
            // {
            //     v[j] = v[j+1];
            // }
            // vs--;

            // for(int j=i; j<cs-1; j++)
            // {
            //     c[j] = c[j+1];
            // }
            // cs--;
        }

        else{
            v2.push_back(v[i]);
            c2.push_back(c[i]);
        }
    }
    //v2.push_back(v[v.size()-1]);
    //check v2 c2
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    } cout<<endl;

    for(int i=0; i<c2.size(); i++)
    {
        cout<<c2[i]<<" ";
    } cout<<endl;

    //For Multiplication
    vector<int>v3;
    vector<char>c3;
    for(int i=0; i<c2.size(); i++)
    {
        if(c2[i]=='*')
        {
            int mult = v2[i]*v2[i+1];
            int j = i+1;
            while(c2[j]=='*')
            {
                mult = mult*v2[j];
                j++;
                i++;
            }

            v3.push_back(mult);

        }
        else{
            v3.push_back(v2[i]);
            c3.push_back(c2[i]);

        }
    }
    //v3.push_back(v2[v2.size()-1]);

    //For plus_minus

    int result = v3[0];
    for(int i=1; i<c3.size(); i++)
    {
         if(c3[i]=='+')
        {
            result += v3[i];

        }
        else{
            result -= v3[i];
        }

    }

    //check
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    } cout<<endl;

    for(int i=0; i<c3.size(); i++)
    {
        cout<<c3[i]<<" ";
    } cout<<endl;

    cout<<"The Result is: "<<result<<endl;

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
