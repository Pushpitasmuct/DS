#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* p=&a;
    int**q=&p;
    int***r=&q;
    cout<<a<<endl;//value
    cout<<p<<endl;//adress of a
    cout<<*p<<endl;//value of a
    cout<<q<<endl;//adress of p
    cout<<*q<<endl;//value of p=address of a
    cout<<**q<<endl;//value of a
    cout<<***r<<endl;//value of a
    return 0;
}