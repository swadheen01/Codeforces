/*
 * Copyright (c) Swadheen Islam Robi (SIR01)
 * Created on Sun Dec 08 2024 1:10:55 AM
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

// Custom Node structure for queue
struct Node {
    ll data;
    Node* next;
    Node(ll d) {
        data = d;
        next = NULL;
    }
};

// Custom Queue implementation using linked list
struct Queue {
    Node* front = NULL; // Points to the front of the queue
    Node* rear = NULL;  // Points to the rear of the queue
    int cnt = 0;        // Keeps track of the size of the queue

    void push(ll d);    // Enqueue operation
    void pop();         // Dequeue operation
    bool empty();       // Check if the queue is empty
    ll Front();    // Get the front value of the queue
};

void Queue::push(ll d) {
    Node* n = new Node(d);
    if (rear == NULL) {
        front = rear = n;
    } else {
        rear->next = n;
        rear = n;
    }
    cnt++;
}

void Queue::pop() {
    if (empty()) throw runtime_error("Cannot pop from an empty queue!");
    Node* temp = front;
    front = front->next;
    if (front == NULL) rear = NULL; // If the queue becomes empty
    delete temp;
    cnt--;
}

bool Queue::empty() {
    return cnt == 0;
}

ll Queue::Front() {
    if (empty()) throw runtime_error("Cannot access front of an empty queue!");
    return front->data;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    vector<string> ans;
    Queue q; // Using custom queue

    while (t--) { // Query number
        ll x;
        cin >> x; // This x means type of the query
        if (x == 1) { // Enqueue operation
            ll n;
            cin >> n;
            q.push(n);
        } else if (x == 2) { // Dequeue operation
            if (!q.empty()) {
                q.pop();
            }
        } else {
            if (!q.empty()) {
                ans.push_back(to_string(q.Front())); // Storing the front element to ans
            } else {
                ans.push_back("Empty!"); // If queue is empty, storing "Empty!"
            }
        }
    }

    for (const auto& res : ans) { // Printing the result all at once for time saving
        cout << res << endl;
    }

    return 0;
}