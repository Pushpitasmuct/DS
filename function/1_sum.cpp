#include<iostream>
using namespace std;
int add(int a,int b){//treturn typ,function name,perameter/argument
int c=a+b;
return c;
}
int main(){
    int x,y;
    cin>>x>>y;
    int result=add(x,y);
    cout<<"sum="<<result<<endl;
    return 0;
}