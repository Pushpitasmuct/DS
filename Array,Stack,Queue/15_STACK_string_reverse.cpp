#include<bits/stdc++.h>
using namespace std;
int top = -1;
bool isEmpty()
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
bool isFull(int n)
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
void Push(char ar[], int n, char x)
{
    if(isFull(n))
    {
        cout<<"stack overflow"<<endl;
        return;
    }

    top = top+1;
    ar[top] = x;
}
void Pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return;
    }
    top = top-1;
}
int peek(char ar[])
{
    if(isEmpty())
    {
        return -1;
    }
    else
    {
        return ar[top];
    }
}
void print(char ar[])
{
    cout<<"reverse: ";
    for(int i=top; i>=0; i--) ///*****
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  string S;
  cout<<"Enter a string: ";
  cin>>S;
  int n=S.length(); ///****
  char st[n]; ///revers string
  for(int i=0; i<n; i++)
  {
     Push(st,n,S[i]);
  }
  print(st);
    return 0;
}