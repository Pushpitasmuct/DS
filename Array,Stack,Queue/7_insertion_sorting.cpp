#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i=1; i<n; i++) { //// i=1 theke******
        int val = arr[i];
        int hole = i;
        while (hole>0 && arr[hole-1]>val) { ////&& kintu*****///while***
            arr[hole] = arr[hole-1];
            hole--;///****
        }
        arr[hole] = val;
    }
}
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n; ///array size

    int arr[n];

    for (int i=0; i<n; i++) { ///array input
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    insertionSort(arr, n);
    
    for (int i=0; i<n; i++) ///array output
        cout << "arr[" << i << "] = " << arr[i] << endl ;
    cout << endl;
return 0;
}
