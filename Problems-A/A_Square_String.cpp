#include<bits/stdc++.h>
using namespace std;
void sir()
{
    string s;
    cin>>s;
    int n = s.length();
    if(n%2 != 0)
    {
        cout<<"NO"<<endl;
    }
    else{
        if(s.substr(0, (n/2)) == s.substr(n/2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sir();
    }
}