/*
 *Copyright (c) LU_Avengers
 *Created on Fri Jun 14 2024 7:00:28 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

char s[1000000];
int i,c,a;
int main()
{
    cin>>s;
    for (i = 0; s[i] != '\0'; ++i)
    {

    if(s[i]>='a'&& s[i]<='z') c++;
    else if(c>0){
        c--;
        a++;
        }
}
    cout<<a<<endl;
}

