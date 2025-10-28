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
  
    int x, i, j;
    x = arr[1]; 
    arr[1] = arr[n]; 

    i = 1, j = 2*i; 

    while (j < n-1) {
        if (arr[j+1] > arr[j]) 
           
            j = j+1;

        if (arr[i] < arr[j]) { 
           
            swap(arr[i], arr[j]); 
            i = j;
            j = 2*j;
        }
        else
            break;
    }

    arr[n] = x; 
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
