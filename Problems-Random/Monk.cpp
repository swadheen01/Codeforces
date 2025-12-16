#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,multiset<string> >mp; //multiset for same name multiple person
    int n; cin>>n;

    for(int i=0; i<n;i++)
    {
        int mark ;
        string name;
        cin>>name>>mark; //mp[mark] ek set hoye gelo
        mp[mark].insert(name);
    }
    auto cur_it = mp.end();
    cur_it--;
    while(1)
    {
        auto &stdnt = (*cur_it).second;
        int mark = (*cur_it).first;
        for(auto each: stdnt)
        {
            cout<<each<<" "<<mark<<endl;
        }
        if(cur_it==mp.begin()) break;
        cur_it--;
    }


}
