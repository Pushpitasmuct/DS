#include<iostream>
using namespace std;
float add(int a,int b,int c){
int p=a+b+c;    
int avg=p/3.0;
return avg;
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    float result=add(x,y,z);
    cout<<"average="<<result<<endl;
    return 0;
}