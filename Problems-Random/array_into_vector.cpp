/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 22 2024 6:27:54 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

int arr[100000];
int ind = 0;
int size(int *arr)
{
    // int i=0;
    // while(arr[i] != '\0')
    // {
    //     i++;
    // }
    // return i;
    return ind;
}
void pushback(int *arr,int e)
{
    arr[ind++] = e;
}
void popback(int *arr)
{
    //int n = size(arr);
    //arr[n-1] = '\0';
    ind -= 1;
}

void sir()
{
    pushback(arr, 3);
    pushback(arr,4);
    pushback(arr,100);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    cout<<size(arr)<<endl;

    popback(arr);

    cout<<size(arr)<<endl;

    cout<<arr[0]<<" "<<arr[1]<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}

