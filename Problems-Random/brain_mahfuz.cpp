#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    string s;
    cin>>s;
    int a = s.size()-1;
    
    if(s[a]=='M')
    {
        cout<<"Mahfuz"<<endl;
    }
    else if(s[a]=='E')
    {
        cout<<"Emon"<<endl;
    }
    else{
        cout<<"IDK"<<endl;
    }
    return 0;
}