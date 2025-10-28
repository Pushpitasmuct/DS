#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int value;
    Node* next;

};

Node* head = NULL;

Node* createNode(int data)
{
    Node* newNode = new Node();
    (*newNode).value = data;
    (*newNode).next = NULL;

    return newNode;
}

void insertAtLast(int data)
{
    Node* createdNode = createNode(data);

    if(head==NULL)
    {
        head = createdNode;
    }
    else
    {
        Node* temp = head;
        while((*temp).next!=NULL)
        {
            temp = temp->next;
        }
          (*temp).next = createdNode;
    }
}

void printlist()

{
    Node* temp = head;
    cout<<"Linked List: ";
    while(temp!=NULL)
    {
        cout<<(*temp).value<<" ";
        temp = (*temp).next;
    }
    cout<<endl;
}


int main()
{
    int n;
    cout<<"enter how many values: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cout<<"enter a value: ";
        cin>>x;
        insertAtLast(x);
        printlist();
    }

    return 0;
}