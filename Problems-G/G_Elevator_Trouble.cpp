/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 2:00:49 AM
 */

#include <bits/stdc++.h>
using namespace std;

#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

struct Node {
    int value;
    Node* next;
    Node(int val) : value(val), next(NULL) {}
};

struct Queue {
    Node* front = NULL;
    Node* rear = NULL;
    void push(int val);
    void pop();
    int Top();
    bool empty();
};

void Queue::push(int val) {
    Node* newNode = new Node(val);
    if (!rear) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue::pop() {
    if (!front) return;
    Node* temp = front;
    front = front->next;
    if (!front) rear = NULL;
    delete temp;
}

int Queue::Top() {
    if (front) return front->value;
    throw runtime_error("Queue is empty");
}

bool Queue::empty() {
    return front == NULL;
}


int main() {
    ALLAHU_AKBAR

    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    vector<int> dist(f + 1, -1); // Distance array initialized to -1 means these floors are not reached yet
    Queue q;

    dist[s] = 0; // Starting floor
    q.push(s);

    while (!q.empty()) {
        int cur = q.Top();
        q.pop();

        // Try moving up
        if (cur + u <= f && dist[cur + u] == -1) {
            dist[cur + u] = dist[cur] + 1;      //marking the floor as reached
            q.push(cur + u);
        }

        // Try moving down
        if (cur - d >= 1 && dist[cur - d] == -1) {
            dist[cur - d] = dist[cur] + 1;      // //marking the floor as reached
            q.push(cur - d);
        }
    }

    // Output the result
    if (dist[g] == -1) {        //if the goal floor is not reached
        cout << "use the stairs" << endl;
    } else {
        cout << dist[g] << endl;
    }

    return 0;
}
