#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long freq[26]={0};
        for (char c : s) {
            freq[c-'a']++;
        }
        
        long long summ=0;

        for(int i=0; i<26; i++)
        {
            if(freq[i]>1){
                summ += (freq[i]*(freq[i]-1));
            }
        }
        cout<<summ<<endl;


    }
    return 0;
}
