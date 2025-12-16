#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin >> s;

    char pv = '\0';
    int count = 0,  maxm = 0, maxe = 0;

    for (char c : s) {
        if (c == 'M' || c == 'E') {
            if (c == pv) {
                count++;
            } else {
                pv = c;
                count = 1;
            }

            if (c == 'M') {
                maxm = max(maxm, count);
            } else if (c == 'E') {
                maxe = max(maxe, count);
            }
        } else {
            pv = '\0';
            count = 0;
        }
    }

    if (maxe>maxm){
        cout<<"Emon"<<endl;
    }else if(maxm>maxe){
        cout<<"Mahfuz"<<endl;
    }else{
        cout<<"IDK"<<endl;
    }

    return 0;
}
