#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x,y;
    cin>>x>>y;
    
    
    swap(x,y);

    cout<<"1st one="<<x<<"\n2nd one="<<y;

    return 0;
}
