///user size dibe,element dibe,print koraba
#include<iostream>
using namespace std;
int traversal(int n,int i){
    int array[n];
   for(i=0;i<n;i++){
    cin>>array[i];
   }
   for(i=0;i<n;i++){
    cout<<array[i];
   }
   return array[i];
}
int main(){
    int num,j;
    cout<<"enter number:";
    cin>>num;
    traversal(num,j);
    return 0;
}