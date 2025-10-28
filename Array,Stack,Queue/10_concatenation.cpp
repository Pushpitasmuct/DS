#include<bits/stdc++.h>
using namespace std;
int main() {
int n; 
    cout << "Enter array size: ";
    cin >> n; ///input size
int arr[n]; 
for (int i=0; i<n; i++) { ///array element input
        cout << "Enter element no. " << i << ": ";
        cin >> arr[i];
}
for (int i=0; i<n; i++) { ///array element output
       cout << "arr[" << i << "] = " << arr[i] << endl;
}
int size1 = sizeof(arr) / sizeof(int); ///size calculation
int semon[size1];
for (int i=0; i<size1; i++)
        semon[i] = arr[i]; ///copying
for (int i=0; i<size1; i++) ///after copying 
        cout << "semon[" << i << "] = " << semon[i] << endl;
int finalSize = n + size1;
int rana[finalSize];
int m = 0; ///*** important
for (int i=0; i<n; i++) {
        rana[m] = arr[i];
        m++; ///****
     }
for (int i=0; i<size1; i++) {
        rana[m] = semon[i];
        m++; ///*****
    }
for (int m=0; m<finalSize; m++) {
        cout << "rana[" << m << "] = " << rana[m] << endl;
    }
return 0;
}

