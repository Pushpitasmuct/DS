#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* f = NULL;
Node* r = NULL; 

Node* createNode(int val) {
    Node* newNode = new Node(); 
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}
// isEmpty()
bool isEmpty() {
    if (f == NULL && r == NULL)
        return true;

    return false;
}
// enqueue(x)
void enqueue(int x) {
    Node* newNode = createNode(x);
    if (isEmpty())
        f = r = newNode;
    else {
        r->next = newNode;
        r = newNode;
    }
}
// dequeue()
void dequeue() {
    if (isEmpty()) {
        cout << "Nothing to dequeue!" << endl;
        return;
    }
    Node* temp = f;
    if (f == r) // if only one node in queue
        f = r = NULL;
    else // multiple nodes in queue
        f = f->next;
    delete temp;
}
// peek()
int peek() {
    if (isEmpty()) {
        cout << "Nothing to peek at!" << endl;
        return -1;
    }

    return f->data;
}
void printQueue() {
    Node* temp = f;
    cout << "Current Queue: ";
    while (temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    enqueue(10);
    printQueue();
    enqueue(20);
    printQueue();
    enqueue(30);
    printQueue();
    enqueue(40);
    printQueue();
    dequeue();
    printQueue();
    cout << "Front: " << peek() << endl;
    dequeue();
    printQueue();
    cout << "Is Queue empty? : " << isEmpty() << endl;
    return 0;
}
