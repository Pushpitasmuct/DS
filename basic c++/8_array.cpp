#include<iostream>
using namespace std;
int main(){
int i;
int array[10];
for(i=0;i<10;i++){
    cout<<"enter "<<i<<" -th element:";
    cin>>array[i];
}
for(i=0;i<10;i++){
    cout<< array[i]<<" ";
}
    return 0;
}