#include<bits/stdc++.h>
using namespace std;

struct sinfo
{
    int id;
    float cg;
    string name;
};
bool comp(sinfo a, sinfo b)
{
    if(a.cg<b.cg) return true;
    else return false;
}
int main()
{
    int n = 3;
    sinfo s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i].id>>s[i].cg>>s[i].name;
    }
    sort(s, s+n, comp);
        //BUBBLE SORt Below

//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<n-i-1; j++)
//        {
//            if(s[j].cg<s[j+1].cg)
//            {
//                swap(s[j], s[j+1]);
//            }
//        }
//    }
    for(int i=0; i<n; i++)
    {
        cout<<s[i].id<<" ";
    }

}
