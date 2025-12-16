#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string>&m)
{
    cout<<"Size: "<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr. second<<endl;
    }
}

int main()
{
    unordered_map<int,string>m;
    m[1] = "abc";   //O(1)
    m[5] = "bcb";
    m[3] = "aba";
    m.insert({4,"abs"});

    //map<int,string>::iterator it;

    //for(it = m.begin(); it!=m.end(); it++)cout<<pr->first<<" "<<pr->second<<endl;
    print(m);

    auto it = m.find(3);    //O(1)


//    if(it==m.end())
//    {
//        cout<<"No value"<<endl;
//    }
//    else{
//        cout<<(*it).first<<" "<<(*it).second<<endl;
//    }
    if(it != m.end())
    m.erase(it);

    print(m);

}



