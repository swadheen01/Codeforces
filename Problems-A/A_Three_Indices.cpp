/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Aug 31 2024 10:34:37 PM
 */

#include<bits/stdc++.h>
using namespace std;

int a[1010];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i];
		bool check = 0;
		for (int i = 1; i + 2 <= n; i++) 
		{
			if (a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
				cout << "YES"<<endl;
				cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
				check = 1;
                break;
			}
		}
		if (!check) cout << "NO"<<endl;
	}
    return 0;
}