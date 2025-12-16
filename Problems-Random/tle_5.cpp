#include <iostream>
using namespace std;

int minOp(int A, int B) {
    int op = 0;
    
    while (B > A) {
        if (B % 2 == 0 && (B/2>=A)){
            B /= 2;
            op++;}
        else{
            B -= 1;
            op++;
            }
        
    }
    
    if (A == B)
        return op;

}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        cout << minOp(A, B) << endl;
    }

    return 0;
}
