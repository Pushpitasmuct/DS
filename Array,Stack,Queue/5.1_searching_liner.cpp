#include <iostream>
using namespace std;
void search(int arr[],int n,int key)
{
  int check=0; ///*****
  for(int i=0;i<n;i++)
  {
    if(arr[i]==key)
    {
      check=1;
      cout<<"key found at index: "<<i<<endl;
    }
  else{   ///check=0
  cout<<"key not found"<<endl;
  }
 }
}
int main() 
    {
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cout<<"enter element "<<i<<":";
      cin>>arr[i];
    }
     for(int i=0;i<n;i++)
   {
     cout<<arr[i]<<endl;
   }
   int key;
   cout<<"enter an element to search:";
   cin>>key;
   search(arr,n,key);
   return 0;
}