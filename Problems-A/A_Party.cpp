/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 03 2024 9:47:38 PM
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=0; cin>>n; int a[n+1];
	for(int i=1; i<=n; i++)cin>>a[i];
	for(int i=1; i<=n; i++){
		int k=a[i],c=0;
		while(k>0){
			k=a[k]; c++;
			m=c>m?c:m;
		}
	}
	cout<<m+1<<'\n';
    return 0;
}