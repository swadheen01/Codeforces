/*
 * Copyright (c) Swadheen Islam Robi (SIR01)
 * Created on Sat Dec 07 2024 10:00:23 PM
 */

#include <bits/stdc++.h>
using namespace std;

// Custom Node structure
struct Node {
    char data; // To store characters
    Node* next;
    Node(char d) {
        data = d;
        next = NULL;
    }
};

// Custom Stack implementation using linked list
struct Stack {
    Node* head = NULL; // Points to the top of the stack
    int cnt = 0;       // Keeps track of the size of the stack

    void push(char d); // Push a character onto the stack
    void pop();        // Remove the top element from the stack
    bool Empty();      // Check if the stack is empty
    char top();        // Get the top element of the stack
};

void Stack::push(char d) {
    Node* n = new Node(d);
    n->next = head;
    head = n;
    cnt++;
}

void Stack::pop() {
    if (Empty()) throw runtime_error("Cannot pop from an empty stack!"); //to avoid some error
    Node* h = head;
    head = head->next;
    delete h;
    cnt--;
}

bool Stack::Empty() {
    return cnt == 0;
}

char Stack::top() {
    if (Empty()) throw runtime_error("Cannot get the top of an empty stack!");   //to avoid some error
    return head->data;
}

// Function to check if a sequence of '+' and '-' is balanced
int main() {
    string s;
    cin >> s; // Input the sequence of '+' and '-'

    Stack st; // Using custom stack

    for (char c : s) {
        if (st.Empty()) {
            st.push(c); // If the stack is empty, push the current character
        } else if (st.top() == c) {
            st.pop(); // If the current character matches the top, pop the stack
        } else {
            st.push(c); // Otherwise, push the current character
        }
    }

    // If the stack is empty, the sequence is balanced
    if (st.Empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
