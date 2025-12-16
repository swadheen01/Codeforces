#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for(auto v:s)
    {
        cout<<v<<endl;
    }
}
int main()
{
    set<string> s;

    s.insert("abc");
    s.insert("abc");
    s.insert("zsdfk");
    s.insert("bcd");

    auto it = s.find("bcd");
    if(it != s.end())
    {
        cout<<(*it)<<" found"<<endl;
    }
    print(s);
}
