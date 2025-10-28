#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL; // list is empty

Node* createNode(int val) {
    Node* newNode = new Node(); // dynamic memory
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insertAtLast(int val) {
    Node* newNode = createNode(val);

    if (head == NULL) // if list is empty
        head = newNode;

    else { // if at least one node is present
        Node* temp = head;
        while (temp->next!=NULL) { // go to the end of the list
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtStart(int val) {
    Node* newNode = createNode(val);

    if (head != NULL)
        newNode->next = head;

    head = newNode;
}

void insertAtKthPos(int val) {
    int k;
    cout << "Enter position: ";
    cin >> k;

    Node* newNode = createNode(val);

    Node* temp = head;
    for (int i=0; i<k-1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList() {
    cout << "The list is: ";
    Node* temp = head;
    while (temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteFromLast() {
    if (head == NULL) {
        cout << "Nothing to delete" << endl;
        return;
    }
    Node* temp = head;
    while (temp->next->next!=NULL) {
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = NULL;
    delete toDelete;
}

void deleteFromStart() {
    if (head == NULL) {
        cout << "Nothing to delete" << endl;
        return;
    }
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void deleteFromKthPos() {
    int k;
    cout << "Enter position: ";
    cin >> k;

    Node* temp = head;
    for (int i=0; i<k-1; i++) {
        temp = temp->next;
    }

    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}

Node* reverseList() {
    Node* prev = NULL;
    Node* current = head;

    while (current) {
        Node* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

int main() {

    int n;
    cout << "How many elements?: ";
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        insertAtLast(x);
        printList();
    }

    //deleteFromStart();
    Node* newHead = reverseList();
    head = newHead;
    printList();

    return 0;
}
