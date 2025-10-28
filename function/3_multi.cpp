#include<iostream>
using namespace std;
int multi(int a,int b){
int c=a*b;
return c;
}
int main(){
    int x,y;
    cin>>x>>y;
    int result=multi(x,y);
    cout<<"the result="<<result<<endl;
    return 0;
}