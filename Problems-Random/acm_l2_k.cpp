#include <iostream>
#include <string>

using namespace std;


int sir(string num)
{
	
	if (num.compare("0") == 0)
		return 0;
	int ans = 0;
	for (int i=0; i<num.length(); i++)
		ans = (ans + num[i]-'0') % 9;
// If digit sum is multiple of 9, answer
	// 9, else remainder with 9.
	return (ans == 0)? 9 : ans % 9;
}



int main() {
    
    while (true) {
        string n;
        cin >> n;
        if (n == "0") break;
        cout << sir(n) << endl;
    }
    return 0;
}
