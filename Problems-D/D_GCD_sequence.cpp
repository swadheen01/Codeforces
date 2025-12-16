/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 03 2024 10:26:33 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void sir()
{
    int n; cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector<ll> g1;
    vector<ll> g2;
    vector<ll> g3;

    int ga[n-1];
    int ind1 = 0;
    for(int i=0; i<n-1; i++)
    {
        ga[ind1++]= __gcd(arr[i],arr[i+1]);
    }
    
    // int diff_c = 0;
    int ind = -1;

    for(int i=0; i<n-2; i++)
    {
        if(ga[i]>ga[i+1]){
            //diff_c++;
            ind = i;
            break;
        }
    }
    if(ind==-1) {cout<<"YES"<<endl; return;}
    for (int i = 0; i < n; i++)
    {
        if (i != ind + 1)
        {
            g1.push_back(arr[i]);
        }
        if (i != ind + 2)
        {
            g2.push_back(arr[i]);
        }
        if (i != ind)
        {
            g3.push_back(arr[i]);
        }
    }
    vector<int> ga1;
    vector<int> ga2;
    vector<int> ga3;
    for (int i = 0; i < n - 2; i++)
    {
        ga1.push_back(__gcd(g1[i], g1[i + 1]));
        ga2.push_back(__gcd(g2[i], g2[i + 1]));
        ga3.push_back(__gcd(g3[i], g3[i + 1]));
    }
    bool pos1 = true;
    bool pos2 = true;
    bool pos3 = true;
    for(int i=0; i<n-3; i++)
    {
        if (ga1[i] > ga1[i + 1])
        {
            pos1 = false;
        }
        if (ga2[i] > ga2[i + 1])
        {
            pos2 = false;
        }
        if (ga3[i] > ga3[i + 1])
        {
            pos3 = false;
        }
    }
    
    if(pos1||pos2||pos3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
}


int main()
{
    int t; cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}