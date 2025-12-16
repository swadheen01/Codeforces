/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 3:57:44 AM
 */

// Sir code is giving correct value in VScode, but vjudge is saying wrong answer on test 1

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

    Node(int node_data) {
        data = node_data;
        next = nullptr;
    }
};

struct sll {
    Node* head= nullptr;;
    Node* current= nullptr;

    // Rewind: Move pointer to the previous element
    void rewind() {
        if (current == nullptr || current == head) {
            return; // No previous element if the current is the head or empty
        }

        Node* temp = head;
        while (temp != nullptr && temp->next != current) {
            temp = temp->next;
        }
        current = temp;
    }

    // Advance: Move pointer to the next element
    void advance() {
        if (current != nullptr) {
            current = current->next;
        }
    }

    // Update the current element's data
    void update(int value) {
        if (current != nullptr) {
            current->data = value;
        }
    }

    // Insert a new element before the current one
    void insert(int value) {
        Node* newNode = new Node(value);
        if (current == nullptr) {
            head = newNode;
            current = newNode;
        } else {
            if (current == head) {
                newNode->next = head;
                head = newNode;
                current = newNode;
            } else {
                Node* temp = head;
                while (temp != nullptr && temp->next != current) {
                    temp = temp->next;
                }
                temp->next = newNode;
                newNode->next = current;
                current = newNode;
            }
        }
    }

    // Delete the current element
    void deleteNode() {
        if (current == nullptr) {
            return; // If the current is nullptr, doing nothing
        }

        if (current == head) {
            head = head->next;
            current = head;
        } else {
            Node* temp = head;
            while (temp != nullptr && temp->next != current) {
                temp = temp->next;
            }
            if (temp != nullptr) {
                temp->next = current->next;
                current = temp->next;
            }
        }
    }

    // Print the value of the current element
    void printCurrent() {
        if (current != nullptr) {
            cout << current->data << endl;
        }
    }
};

// Function to process the operations
void operation(int n) {
    sll list;
    
    for (int i = 0; i < n; ++i) {
        string op;
        cin >> op;

        if (op == "<") {
            list.rewind();
        } else if (op == ">") {
            list.advance();
        } else if (op == "=") {
            int value;
            cin >> value;
            list.update(value);
        } else if (op == "+") {
            int value;
            cin >> value;
            list.insert(value);
        } else if (op == "-") {
            list.deleteNode();
        } else if (op == "!") {
            list.printCurrent();
        }
    }
}

int main() {
    ALLAHU_AKBAR
    int n;
    cin >> n;  //number of operations

    operation(n);

    return 0;
}
