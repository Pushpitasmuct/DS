#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter array size: ";
    cin >> n; // input size
    int arr[n]; 
for (int i=0; i<n; i++) { ///array input
        cout << "Enter element no. " << i << ": ";
        cin >> arr[i];
    }
for (int i=0; i<n; i++) { ///array output
       cout << "arr[" << i << "] = " << arr[i] << endl;
   }



  // bubble sort**************
  for (int i=0; i<n-1; i++) { // n-1 times ///*****
    for (int j=0; j<n-i-1; j++) { // compare adjacent elements ///*****
        if (arr[j] > arr[j+1]) { ///*****>
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}


for (int i=0; i<n; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl;
        return 0;
}