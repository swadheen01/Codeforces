#include<iostream>
using namespace std;
void sir(){
    int e,f,c;
    cin>>e>>f>>c;
    int total = e+f;
    int result = 0;
    while(total>=c)
    {
        result += total/c;
        total = total/c + total % c;
    }
    cout<<result<<endl;
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