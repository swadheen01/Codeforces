#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int n, m;
        cin >> n >> m;

        deque<int> dq;
        cout << "Case " << t << ":" << endl;

        for (int i = 0; i < m; ++i) {
            string op;
            cin >> op;

            if (op == "pushLeft") {
                int x;
                cin >> x;
                if (dq.size() == n) {
                    cout << "The queue is full" << endl;
                } else {
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                }
            }else if (op == "pushRight") {
                int x;
                cin >> x;
                if (dq.size() == n) {
                    cout << "The queue is full" << endl;
                } else {
                    dq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                }
            } else if (op == "popLeft") {
                if (dq.empty()) {
                    cout << "The queue is empty" << endl;
                }else {
                    int x = dq.front();
                    dq.pop_front();
                    cout << "Popped from left: " << x << endl;
                }
            } else if (op == "popRight") {
                if (dq.empty()) {
                    cout << "The queue is empty" << endl;
                } else {
                    int x = dq.back();
                    dq.pop_back();
                    cout << "Popped from right: " << x << endl;
                }
            }
        }
    }

    return 0;
}
