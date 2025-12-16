/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 4:00:27 AM
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

//creating node
struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};
/// making a double linked lst
struct DLL {
    Node *head = NULL;
    Node *tail = NULL;

    void insertHead(int d);
    void deleteKey(int d);
    void deleteHead();
    void deleteLast();
    void print();
};

void DLL::insertHead(int d) {
    Node *newNode = new Node(d);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void DLL::deleteKey(int d) {
    Node *current = head;

    while (current != NULL) {
        if (current->data == d) {
            if (current == head) {
                deleteHead();
            } else if (current == tail) {
                deleteLast();
            } else {
                current->prev->next = current->next;
                current->next->prev = current->prev;
                delete current;
            }
            return;
        }
        current = current->next;
    }
}

void DLL::deleteHead() {
    if (head == NULL) {
        return;
    } else {
        Node *temp = head;
        head = head->next;
        if (head) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete temp;
    }
}

void DLL::deleteLast() {
    if (tail == NULL) {
        return;
    } else {
        Node *temp = tail;
        tail = tail->prev;
        if (tail) {
            tail->next = NULL;
        } else {
            head = NULL;
        }
        delete temp;
    }
}

void DLL::print() {
    Node *current = head;
    while (current != NULL) {
        cout << current->data;
        if (current->next != NULL) cout << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    
    DLL lst;
    
    int n;
    cin >> n;
    string cmd;
    int value;

    for (int i = 0; i < n; ++i) {
        cin >> cmd;
        if (cmd == "insert") {  //inserting
            cin >> value;
            lst.insertHead(value);
        } else if (cmd == "delete") {   //deleting
            cin >> value;
            lst.deleteKey(value);
        } else if (cmd == "deleteFirst") {
            lst.deleteHead();
        } else if (cmd == "deleteLast") {
            lst.deleteLast();
        }
    }

    lst.print();    //printing the value by traversing
    return 0;
}
