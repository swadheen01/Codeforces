using namespace std;
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <set>
#include <cctype>
#include <map>
#include <cmath>
#include <queue>
#include <algorithm>
#include <stack>
#include <cctype>
#include <cstring>
#include <string>

#define MAX 100100
#define PRIME 31
#define MOD 1000000007
#define PI 3.1415926535897932384
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
typedef long long ll;

int f(){
    string str;
    cin >> str;

    int acm[3] = {0, 0, 0}; // available ^ // _ // completed ^_^
    int notUsed = 0; // _ not used

    for(int i = 0;i < str.size();i++){
        if(str[i] == '^'){
            if(acm[1]){ acm[1]--; acm[2]++; } // complete ^_^
            else if(notUsed){ acm[1]++; notUsed--; } // Use a ^ already in a ^_^ to pair with _ and current ^ to fill ^_^
            else acm[0]++; // Can't complete any ^_^
        }
        else if(acm[0]) { acm[1]++; acm[0]--; } // Pair ^_
        else notUsed = min(notUsed+1, acm[2]); // Count the ^_^ which can have the second ^ replaced
    }

    return acm[2];
}

int main(){
    //freopen("in.txt", "r", stdin);

    int t;
    cin >> t;

    for(int test = 1;test <= t;test++){
        printf("Case %d: %d\n", test, f());
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
char s[131072];
int main() {
    int testcase, cases = 0;
    scanf("%d", &testcase);
    while (testcase--) {
        scanf("%s", s);
        int n = strlen(s);
        int ret = 0;
        int h1 = 0, h2 = 0, h3 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '^' && h2) {
                h2--, ret++;
            } else if (s[i] == '^') {
                if (h3 && ret)
                    h2++, h3--;
                else
                    h1++;
            } else if (s[i] == '_' && h1) {
                h1--, h2++;
            } else if (s[i] == '_') {
                if (ret > h3)
                    h3++;
            }
        }
        printf("Case %d: %d\n", ++cases, ret);
    }
    return 0;
}