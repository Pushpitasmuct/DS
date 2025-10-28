#include<bits/stdc++.h>
using namespace std;
 void selectionSort(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         int iMin=i;///*****
         for(int j=i+1;j<n;j++) ///****
         {
             if(arr[j]<arr[iMin]) ////****
             {
                 iMin=j;
             }
         }
         int temp=arr[i];
         arr[i]=arr[iMin];
         arr[iMin]=temp;
     }
 }
 int main()
 {
     int n;
     cout<<"enter array sixe:";
     cin>>n; ///input size
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cout<<"enter element no.["<<i<<"]=";
         cin>>arr[i]; ///array input
     }
     selectionSort(arr,n);
     for(int i=0;i<n;i++)
     {
       cout<<arr[i]<<endl; ///final output
     }
 }