#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int ans1 = (a*b)+c;
    int ans2 = (a+b)*c;
    int ans3 = a+(b*c);
    int ans4 = a*(b+c);
    int ans5 = a*b*c;
    int ans6 = a+b+c;
    cout<<max({ans1,ans2,ans3,ans4,ans5,ans6})<<endl;
    
}