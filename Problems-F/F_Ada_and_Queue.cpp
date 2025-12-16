/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 1:45:46 AM
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

// Custom structure for the queue using doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        data = d;
        next = prev = NULL;
    }
};

// Custom Queue with reverse functionality

struct Queue {
    Node* front = NULL;
    Node* rear = NULL;
    int cnt = 0;
    bool isRev = false;

    void push_back(int d);
    void toFront(int d);
    void reverse();
    void pop_front();
    void pop_back();
    bool empty();
    int Front();
    int Back();
};

void Queue::push_back(int d) {
    Node* n = new Node(d);
    if (rear == NULL) {
        front = rear = n;
    } else {
        rear->next = n;
        n->prev = rear;
        rear = n;
    }
    cnt++;
}

void Queue::toFront(int d) {
    Node* n = new Node(d);
    if (front == NULL) {
        front = rear = n;
    } else {
        n->next = front;
        front->prev = n;
        front = n;
    }
    cnt++;
}

void Queue::reverse() {
    isRev = !isRev;
}

void Queue::pop_front() {
    if (empty()) throw runtime_error("Queue is empty!");
    Node* temp = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    } else {
        front->prev = NULL;
    }
    delete temp;
    cnt--;
}

void Queue::pop_back() {
    if (empty()) throw runtime_error("Queue is empty!");
    Node* temp = rear;
    rear = rear->prev;
    if (rear == NULL) {
        front = NULL;
    } else {
        rear->next = NULL;
    }
    delete temp;
    cnt--;
}

bool Queue::empty() {
    return cnt == 0;
}

int Queue::Front() {
    if (empty()) throw runtime_error("Queue is empty!");
    return front->data;
}

int Queue::Back() {
    if (empty()) throw runtime_error("Queue is empty!");
    return rear->data;
}

int main() {
    ALLAHU_AKBAR
    int Q;
    cin >> Q;

    Queue q;

    while (Q--) {
        string cmd;
        cin >> cmd;     // taking input of command

        if (cmd == "push_back") {       // if command is pushback then by checking the reverse condition pushing back or front
            int N;
            cin >> N;
            if (!q.isRev) {
                q.push_back(N);
            } else {
                q.toFront(N);
            }
        } else if (cmd == "toFront") {   // if command is tofront then by checking the reverse condition pushing back or front
            int N;
            cin >> N;
            if (!q.isRev) {
                q.toFront(N);
            } else {
                q.push_back(N);
            }
        } else if (cmd == "front") {
            if (q.empty()) {
                cout << "No job for Ada?" << endl;    // if queue is empty No job for Ada
            } else {
                if (!q.isRev) {
                    cout << q.Front() << endl;
                    q.pop_front();
                } else {
                    cout << q.Back() << endl;
                    q.pop_back();
                }
            }
        } else if (cmd == "back") {
            if (q.empty()) {
                cout << "No job for Ada?" << endl;
            } else {
                if (!q.isRev) {
                    cout << q.Back() << endl;
                    q.pop_back();
                } else {
                    cout << q.Front() << endl;
                    q.pop_front();
                }
            }
        } else if (cmd == "reverse") {
            q.reverse();        // if command is reverse then reverse condition should be changed
        }
    }

    return 0;
}
