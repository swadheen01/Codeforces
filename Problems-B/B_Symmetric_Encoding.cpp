#include<bits/stdc++.h>
using namespace std;
string decode(const string &r){
    set<char>uni(r.begin(),r.end());

    string unis(uni.begin(), uni.end());

    //map
    int len = unis.size();
    map<char, char> dm;
    for(int i=0; i<len; i++)
    {
        dm[unis[i]] = unis[len - 1-i];
    }
    //decode

    string ans;
    for(char c: r){
        ans += dm[c];
    }
    return ans;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string r,s; cin>>r;
        // vector<bool> seen(26, false);
        // string rn;

    // if(n==1) cout<<r<<endl;
    // else{
    // for (char c : r) {
    //     if (!seen[c]) {
    //         seen[c] = true;
    //         rn += c;
    //     }
    // }
    //     sort(rn.begin(), rn.end());
    //     reverse(rn.begin(), rn.end());
    //     reverse(r.begin(), r.end());
        cout<<decode(r)<<endl;
    
    }
    
    
}