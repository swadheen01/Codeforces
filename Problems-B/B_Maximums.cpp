/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Sep 15 2024 11:52:53 PM
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int n;
  cin >> n;
  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }                  
  vector<int> a(n);
  int x = 0;
  for (int i = 0; i < n; i++) {
    a[i] = b[i] + x;
    x = max(x, a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    cout << a[i];
  }
  cout << '\n';
  return 0;
}