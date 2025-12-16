#include<bits/stdc++.h>
using namespace std;

// Custom Node structure for deque
struct Node {
    char data;
    Node* next;
    Node* prev;
    Node(char d) {
        data = d;
        next = prev = NULL;
    }
};

// Custom Deque using a doubly linked list
struct Deque {
    Node* front = NULL; // Points to the front of the deque
    Node* rear = NULL;  // Points to the rear of the deque

    void push_front(char d); // Add an element to the front
    void push_back(char d);  // Add an element to the rear
    char pop_front();        // Remove and return the front element
    char pop_back();         // Remove and return the rear element
    bool Empty();            // Check if the deque is Empty
    char Front();       // Get the front value
    char backValue();        // Get the rear value
};

void Deque::push_front(char d) {
    Node* n = new Node(d);
    if (front == NULL) {
        front = rear = n;
    } else {
        n->next = front;
        front->prev = n;
        front = n;
    }
}

void Deque::push_back(char d) {
    Node* n = new Node(d);
    if (rear == NULL) {
        front = rear = n;
    } else {
        n->prev = rear;
        rear->next = n;
        rear = n;
    }
}

char Deque::pop_front() {
    if (Empty()) throw runtime_error("Cannot pop from an Empty deque!");
    Node* temp = front;
    char value = temp->data;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    } else {
        front->prev = NULL;
    }
    delete temp;
    return value;
}

char Deque::pop_back() {
    if (Empty()) throw runtime_error("Cannot pop from an Empty deque!");
    Node* temp = rear;
    char value = temp->data;
    rear = rear->prev;
    if (rear == NULL) {
        front = NULL;
    } else {
        rear->next = NULL;
    }
    delete temp;
    return value;
}

bool Deque::Empty() {
    return front == NULL;
}

char Deque::Front() {
    if (Empty()) throw runtime_error("Cannot access front of an Empty deque!");
    return front->data;
}

char Deque::backValue() {
    if (Empty()) throw runtime_error("Cannot access back of an Empty deque!");
    return rear->data;
}

int main() {
    string s;
    int ok = 0;     // ok indicates whether we are in "Home" mode (1) or "End" mode (0)
    Deque dq;       // Using custom deque

    while (cin >> s) {  // As long as input is provided, the program will continue
        string temp = "";   // Temporary string to collect characters

        // Traversing each character in the input string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ']') {  // End mode happened

                if (ok == 1) {  // If we were in "Home" mode
                    // Adding the collected temp string in reverse to the front of the deque
                    for (int j = temp.size() - 1; j >= 0; j--) {
                        dq.push_front(temp[j]);
                    }
                } else {    // If we were in "End" mode
                    // Adding the collected temp string in order to the back of the deque
                    for (int j = 0; j < temp.size(); j++) {
                        dq.push_back(temp[j]);
                    }
                }

                temp = "";  // Clearing temp and reset mode to End
                ok = 0;
            } else if (s[i] == '[') {   // If Home mode found
                if (ok == 1) {  // If we were already in "Home" mode
                    // Add the collected temp string in reverse order to the front of the deque
                    for (int j = temp.size() - 1; j >= 0; j--) {
                        dq.push_front(temp[j]);
                    }
                } else {    // If we were in "End" mode
                    // Adding the collected temp string in order to the back of the deque
                    for (int j = 0; j < temp.size(); j++) {
                        dq.push_back(temp[j]);
                    }
                }

                temp = "";  // Clearing the temp string and set mode to Home
                ok = 1;
            } else {
                temp += s[i];   // Normal characters are added to the temp string
            }
        }

        // Handling remaining characters in temp after processing the string
        if (ok == 1) {  // If in "Home" mode
            for (int j = temp.size() - 1; j >= 0; j--) {
                dq.push_front(temp[j]);
            }
        } else {
            for (int j = 0; j < temp.size(); j++) {
                dq.push_back(temp[j]);
            }
        }

        temp = ""; // Clearing temp for the next string

        // Output the result by printing all characters in the deque
        while (!dq.Empty()) {
            cout << dq.Front(); // Printing the front character
            dq.pop_front();          // Removing it from the deque
        }
        cout << "\n"; // Newline after each ans string
    }
}
