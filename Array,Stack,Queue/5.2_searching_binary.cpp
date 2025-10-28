#include <iostream>
#include <algorithm> 
using namespace std;
void binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1; ///******
    bool found = false; ///*****
    while (low <= high) {
        int mid = (low + high) / 2; ///*******

        if (arr[mid] == key) {
            cout << "Key found at index: " << mid << endl;
            found = true;
            break; ///*****
        }
        else if (arr[mid] < key) {
            low = mid + 1;
            
        }
        else {    ///arr[mid]>key
            high = mid - 1;
        }
    }
    if (!found) { ///*****
        cout << "Key not found" << endl;
    }
}
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }   
    sort(arr, arr + n);///*************
    cout << "Sorted array:" << endl; ///for this operation user should inpur sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int key;
    cout << "Enter an element to search: ";
    cin >> key;
    binarySearch(arr, n, key);
    return 0;
}
