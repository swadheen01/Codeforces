#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0; i<n; i++)
    {
        arr[s[i]-'a']++; //frequency array creating
    }
    // for(int i=0; i<26; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int count = 0;
    for(int i=0; i<26; i++)
    {
        if(arr[i]%2==1){count++;}
    }
    if(k<count-1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sir();
    }

}