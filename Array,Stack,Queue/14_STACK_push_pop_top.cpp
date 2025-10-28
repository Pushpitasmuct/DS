#include<bits/stdc++.h>
using namespace std;
int top = -1; ///top agei declear
bool isEmpty() ///bool
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull(int n) ///bool
{
    if(top==n-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Push(int ar[], int n, int x)
{
    if(isFull(n)) ///****paramiter
    {
        cout<<"stack overflow"<<endl;
        return; ///**** 
    }
    top = top+1;
    ar[top] = x; ///*****
}
void Pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return; ///****
    }
    top = top-1;
}
int peek(int ar[])
{
    if(isEmpty())
    {
        return -1; ///******
    }
    else
    {
        return ar[top]; ///****
    }
}
void print(int ar[])
{
    cout<<"stack: ";
    for(int i=0; i<=top; i++) ///i<=top *****
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main()
{
   int n;
   cout<<"enter stack size: ";
   cin>>n;
   int A[n];
   Push(A,n,2);
   Push(A,n,10);
   print(A);
   Pop();
   print(A);
   Push(A,n,7);
   print(A);
   Push(A,n,5);
   print(A);
   cout<<peek(A)<<endl;///top  ///****
   cout<<isEmpty()<<endl; ///****
   Pop();
   print(A);
   Pop();
   print(A);
   return 0;
}

