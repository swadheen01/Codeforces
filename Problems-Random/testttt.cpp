#include<bits/stdc++.h>
using namespace std;
int main()
{
    int div = 123;
    vector<int>v;
    while(div>=10)
    {
        int dig = div%10;
        div/=10;
        v.push_back(dig);
    }
    v.push_back(div);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
