#include<bits/stdc++.h>
using namespace std;
int main() {
int n; 
    cout << "Enter array size: ";
    cin >> n; // input array size
int arr[n]; 
for (int i=0; i<n; i++) { ///array input
        cout << "Enter element no. " << i << ": ";
        cin >> arr[i];
}
for (int i=0; i<n; i++) { ///array output
       cout << "arr[" << i << "] = " << arr[i] << endl;
}
       int size1 = sizeof(arr) / sizeof(int); ///****size calculation

 int semon[size1]; ///new array ~copy kore rakhte
 for (int i=0; i<size1; i++)
        semon[i] = arr[i]; ///copy

for (int i=0; i<size1; i++) ///copy ta print
        cout << "semon[" << i << "] = " << semon[i] << endl;
        return 0;
}