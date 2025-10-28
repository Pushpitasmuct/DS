#include<iostream>
using namespace std;
int main(){
int i,n;
cout<<"enter size:";
cin>>n;
int array[n];
for(i=0;i<n;i++){
    cout<<"enter "<<i<<" -th element:";
    cin>>array[i];
}
for(i=0;i<n;i++){
    cout<< array[i]<<" ";
}
    return 0;
}