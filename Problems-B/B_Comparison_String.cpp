//এরে তে আরেকটা করে নাম্বার বাড়বে

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        char temp = s[0];
        int arr[n+1];
        arr[0] = {100};
        if(s[0]=='<')
        {
            arr[1]= 101;
        }
        else{
            arr[1]= 99;
        }
        for(int i =1; i<n; i++)
        {
            if(s[i]=='<' && s[i-1]=='<')
            {
                arr[i+1]= arr[i]+1;
            }
            else if(s[i]=='>' && s[i-1]=='>')
            {
                arr[i+1]= arr[i]-1;
            }
            else if(s[i]=='>' && s[i-1]=='<')
            {
                arr[i+1]= arr[i]-1;
            }
            else{
                arr[i+1]= arr[i]+1;
            }
            
        }
        if(s[n-1]=='<')
        {
            arr[n] = arr[n-1]+1;
        }
        else{
            arr[n] = arr[n-1]-1;
        }
        // for(int i=0; i<n+1; i++)
        //     {
        //         cout<<arr[i]<<" ";
        //     }cout<<endl;

        unordered_set<int>sett;
        for(int i=0; i<n+1; i++)
        {
            sett.insert(arr[i]);
        }
        cout<<sett.size()<<endl;

    }
    return 0;
}