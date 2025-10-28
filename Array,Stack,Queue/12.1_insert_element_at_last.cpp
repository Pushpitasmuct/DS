#include<iostream>
using namespace std;
int main(){
int n,x,i;
cout<<"enter size:"<<endl;
cin>>n;
int array[n];
cout<<"enter array elements:"<<endl;
for(i=0;i<n;i++){
    cin>>array[i];
}
cout<<"enter insert element:"<<endl;
cin>>x;
array[i]=x;
n++;
for(i=0;i<n;i++){
    cout<<array[i]<<" ";
}

    return 0;
}