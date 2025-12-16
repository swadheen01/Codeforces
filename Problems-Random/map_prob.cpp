#include<bits/stdc++.h>
using namespace std;

void print(map<string,int>&m)
{
    cout<<"Size: "<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    map<string,int>m;

    int n; cin>>n;

    for(int i=0; i<n;i++)
    {
        string s; cin>>s;
        //m[s] = m[s] + 1;
        m[s]++;

    }
    print(m);

}



