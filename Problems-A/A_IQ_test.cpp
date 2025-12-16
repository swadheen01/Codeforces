/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jun 19 2024 10:35:14 PM
 */
#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int n; cin>>n;
    int arr[n];
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        vec.push_back(arr[i]%2);
    }
    int ind = 0;
    int a = vec[0];
    for(int i=1; i<n-1; i++)
    {
        if(vec[i] != a && vec[i+1]==a || vec[i]==a && vec[i+1] != a) ind = i;
        // else if() ind = i;
    }
    cout<<ind+1<<endl;
}
int main()
{
    sir();
}