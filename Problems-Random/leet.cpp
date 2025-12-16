#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {

        vector<int>v;

        int n = word.length();
        int con = 1;

        for(int i=1;i<n; i++)
        {
            if(word[i]==word[i-1]) con++;
            else{
                v.push_back(con);
                con = 1;
            }
        }
        v.push_back(con);
        int ans = 1;

        int mult = 0;
        for(auto p:v)
        {
            //cout<<p<<" ";
            ans += (p-1);
        }
        return ans;

        
    }
};

int main() {
    Solution sol;

    string input;
    cin >> input;

    int result = sol.possibleStringCount(input);
    cout <<result << endl;

    return 0;
}
