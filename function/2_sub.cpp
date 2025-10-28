#include<iostream>
using namespace std;
int sub(int a,int b){
int c=a-b;
return c;
}
int main(){
    int x,y;
    cin>>x>>y;
    int result=sub(x,y);
    cout<<"the result is="<<result<<endl;
    return 0;
}