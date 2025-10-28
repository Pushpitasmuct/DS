//linked list
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL; //list is empty

Node* createNode(int val)
{
    Node* newNode = new Node(); //dynamic memory
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insertAtLast(int val)
{
    Node* newNode = createNode(val);

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while(temp->next!=NULL)
        {
            //go to end of the list
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtStart(int val)
{
    Node* newNode = createNode(val);
    //logic
    //newNode->next = head;
    //head = newNode;
    if(head != NULL)
    {
        newNode->next = head;
    }

    head = newNode;
}

void insertAtPos(int val)
{
    int k;
    cout<<"enter position: ";
    cin>>k;

    Node* newNode = createNode(val);
    Node* temp = head;

    for(int i=0; i<k-1 ;i++)
    {
        temp = temp->next;

    }

    newNode->next = temp->next;
    temp->next = newNode;
}
void printList()
{
    cout<<"the list is: ";
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    int n;
    cout<<"how many elements: ";
    cin>>n;

    cout<<endl;

    
    while(n--)
    {
        int x;
        cin>>x;
        insertAtStart(x);
        printList();
    }

    insertAtPos(10);
    printList();
    insertAtPos(20);
    printList();

    return 0;
}