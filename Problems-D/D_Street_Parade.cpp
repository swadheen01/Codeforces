/*
 * Copyright (c) Swadheen Islam Robi (SIR01)
 * Created on Dec 16 2024
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

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

struct Stack {      //creating a custom stack
    Node* head = NULL;
    int cnt = 0;

    void push(int d);
    void pop();
    bool Empty();
    int top();
};

void Stack::push(int d) {
    Node* n = new Node(d);
    n->next = head;
    head = n;
    cnt++;
}

void Stack::pop() {
    if (Empty()) return;
    Node* temp = head;
    head = head->next;
    delete temp;
    cnt--;
}

bool Stack::Empty() {
    return cnt == 0;
}

int Stack::top() {
    if (!Empty()) return head->data;
    return -1; // Returning an invalid value if empty (shouldn't happen in this problem)
}

int main() {
    ALLAHU_AKBAR    //Fast IO

    while (1) {
        int n;
        cin >> n;
        if (n == 0) break; // End of input

        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        Stack st;
        int exp = 1; // The next trk we expect in the final order

        for (int trk : vec) {
            while (!st.Empty() && st.top() == exp) {
                st.pop();
                exp++;
            }

            if (trk == exp) {
                exp++;
            } else {
                st.push(trk);
            }
        }

        // Checking if remaining truck in the side street are in correct order
        while (!st.Empty() && st.top() == exp) {
            st.pop();
            exp++;
        }

        if (st.Empty()) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
