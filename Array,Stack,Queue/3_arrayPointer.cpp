#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[]={4,3,2,7,8};
    for(i=0;i<5;i++){
        cout<<*(arr+i)<<endl;//value dereference
    }
    return 0;
}