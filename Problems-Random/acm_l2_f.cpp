#include<iostream>
using namespace std;
int main()
{
    string s;
    int i;
    int pre;
    int now;
    while(cin>>s)
    {
        pre=0;
        now=0;
        for(i=0;i< s.length();i++)
        {
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
                now=1;
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
                now=2;
            else if(s[i]=='D'||s[i]=='T')
                now=3;
            else if(s[i]=='L')
                now=4;
            else if(s[i]=='M'||s[i]=='N')
                now=5;
            else if(s[i]=='R')
                now=6;
            else
                now=0;
            if(now==pre){
                continue;}
            else if(now!=0)
            {
                cout<<now;
                pre=now;
            }
            else{
                pre=now;}
        }
        cout<<endl;
    }
    return 0;
}