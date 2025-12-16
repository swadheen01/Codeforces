#include<bits/stdc++.h>
using namespace std;

void sir()
{
    string s;
    cin>>s;
    int n = 5;
    int hour = stoi(s.substr(0,2));
    string hourr = s.substr(0,2);
    if(hour<12 && hour>0)
    {
        cout<<s<<" "<<"AM"<<endl;
    }
    else if (hour==12)
    {
        cout<<s<<" "<<"PM"<<endl;
    }
    else if(hour == 0)
    {
        cout<<12<<s.substr(2,5)<<" "<<"AM"<<endl;
    }
    else if(hour<22 && hour > 12)
    {
        cout<<"0"<<(hour-12)<<s.substr(2,5)<<" "<<"PM"<<endl;
    }

    else{
        cout<<(hour-12)<<s.substr(2,5)<<" "<<"PM"<<endl;
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