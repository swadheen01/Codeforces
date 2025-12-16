/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 2:13:25 AM
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

// Custom Node structure for stack
struct Node {
    string data;
    Node* next;
    Node(string d) {
        data = d;
        next = NULL;
    }
};

// Custom Stack using linked list
struct Stack {
    Node* head = NULL; // Points to the top of the stack
    int cnt = 0; // Keeps track of the size of the stack

    void push(string d); // Push operation
    void pop(); // Pop operation
    bool Empty(); // Check if the stack is empty
    string top(); // Get the top element of the stack
    bool contains(string d); // Check if the stack contains a particular element
};

void Stack::push(string d) {
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

string Stack::top() {
    if (Empty()) return "";
    return head->data;
}

bool Stack::contains(string d) {
    Node* temp = head;
    while (temp) {
        if (temp->data == d) return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    ALLAHU_AKBAR

    ll n;
    cin >> n; // Number of name
    vector<string> name(n); // Store name in a vector
    for (int i = 0; i < n; i++) {
        cin >> name[i];
    }

    Stack st; // Custom stack for checking possessed name
    for (int i = 0; i < n; i++) {
        if (st.contains(name[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            st.push(name[i]);
        }
    }

    return 0;
}
