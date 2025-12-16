#include<bits/stdc++.h>
using namespace std;
void printv(vector<int>&v)
{
    cout<<"Size is: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        cout<<v[i]<<" ";
    } cout<<endl;
}

int main()
{
//    vector<pair<int, int>> v = { {1,2}, {2,3}, {5,9} };
//
//    print(v);
//    int n = 3;
//    vector<pair<int, int>> v2;
//
//    //input
//    for(int i=0; i<n; i++)
//    {
//        int x,y; cin>>x>>y;
//        v2.push_back({x,y});
//    }
//    print(v2);

    vector<vector<int>>v3;
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int>temp;
        int m; cin>>m;
        for(int j=0; j<m; j++)
        {
            int x; cin>>x;
            temp.push_back(x);
        }
        v3.push_back(temp);
    }
    for(int i=0; i<n; i++)
    {
        printv(v3[i]);
    }
    cout<<v3[0][1]<<endl;
}
