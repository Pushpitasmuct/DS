#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL; // stack is empty

Node* createNode(int val) {
    Node* newNode = new Node(); // dynamic memory
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// isEmpty()
bool isEmpty() {
    if (top == NULL)
        return true;

    return false;
}
// push(x)
void push(int x) {
    Node* newNode = createNode(x);

    if (!isEmpty())
        newNode->next = top;

    top = newNode;
}
// pop()
void pop() {
    if (isEmpty()) {
        cout << "Stack is already empty!";
        return;
    }
    Node* mariam = top;
    top = top->next;
    delete mariam;
}
// peek()
int peek() {
    if (isEmpty()) {
        cout << "Nothing to peek at!";
        return -1;
    }

    return top->data;
}

void printStack() {
    Node* temp = top;
    cout << "Current Stack: " << endl;
    while (temp!=NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {

    push(10);
    printStack();
    push(20);
    printStack();
    push(30);
    printStack();
    push(40);
    printStack();
    pop();
    printStack();
    cout << "Top: " << peek() << endl;
    pop();
    printStack();
    cout << "Is stack empty? : " << isEmpty() << endl;

    return 0;
}
