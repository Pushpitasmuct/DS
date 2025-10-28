#include <iostream>
using namespace std;
void Insert(int arr[],int n,int value,int idx=-1){//default parameter
    if(idx==-1)
    {
        int j=0;
        while(arr[j]!=0)//find first aviable space.
            j++;
        idx=j;//assign available index to idx.
        arr[idx]=value;//assign the value
    }
else{
    if(arr[idx]!=0){
        for(int i=n-1;i>idx;i--)
            arr[i]=arr[i-1];
            arr[idx]=value;
        
    }
}
}
int main() {
int arr[10]={0};
Insert(arr,10,5);///idx=0
Insert(arr,10,10);///idx=1
Insert(arr,10,100,0);///idx=0

for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}