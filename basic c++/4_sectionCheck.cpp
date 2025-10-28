#include<iostream>
using namespace std;
int main(){
int i;
for(i=0;i<10;i++){
    if(i==3)
    continue;
    cout<<i<<" ";
    if(i==7)
    break;
   } 
    return 0;
}