#include<bits/stdc++.h>
using namespace std;
int sum(int* a,int* b){
    int*c=new int;///heap a memory allocation
     *c=*a+*b;
  return *c ;
}
int main(){
    int x=2,y=3;
    int result=sum(&x,&y);
    cout<<"result="<<result<<endl;
    return 0;
}