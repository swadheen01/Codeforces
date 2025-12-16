#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int a,b,c;
    cin>>a>>b>>c;
    int tent=0;
    if((b%3!=0 && (b%3+c)<3))
    {
        cout<<"-1"<<endl;
    }
    else{

        tent += a;
        tent += b/3;
        b = b%3;
        if((b+c)%3 == 0){
            tent += (b+c)/3;}
            else{
                tent += ((b+c)/3)+1;
            }
        cout<<tent<<endl;
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
    return 0;
}