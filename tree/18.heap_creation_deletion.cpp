#include<bits/stdc++.h>
using namespace std;

void createHeap(int* arr, int x) {
    // x = current index
    int temp = arr[x];
    while (x > 1 && temp > arr[x/2]) {
        swap(arr[x], arr[x/2]);
        x = x/2;
    }
    arr[x] = temp;
}

void deleteFromHeap(int* arr, int n) {
    // n = replacement index
    int x, i, j;
    x = arr[1]; // keep root in x
    arr[1] = arr[n]; // keep replacement in root

    i = 1, j = 2*i; // to compare with children

    while (j < n-1) {
        if (arr[j+1] > arr[j]) // check if right child
            // is greater than left child
            j = j+1;

        if (arr[i] < arr[j]) { // check if parent is
            // less than child
            swap(arr[i], arr[j]); // swap parent and child
            i = j;
            j = 2*j;
        }
        else
            break;
    }

    arr[n] = x; // keep root in last replacement index
}

int main() {

    int A[] = {0, 10, 20, 30, 25, 5, 40, 35};

    int n = sizeof(A)/sizeof(A[0]);

    for (int i=2; i<n; i++)
        createHeap(A, i);


    for (int i=n-1; i>0; i--) {
        cout << "After deleting " << A[1] << ": ";
        deleteFromHeap(A, i);

        for (int i=1; i<n; i++)
            cout << A[i] << ", ";
        cout << endl;
    }
    return 0;
}
