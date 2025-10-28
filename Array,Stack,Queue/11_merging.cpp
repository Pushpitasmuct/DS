#include <iostream>
using namespace std;
void mergeArrays(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0, k = 0;
    int merged[size1 + size2];
    // দুটি অ্যারে একত্রে মেশানো
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    // যদি arr1-এর কিছু উপাদান বাকি থাকে
    while (i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    // যদি arr2-এর কিছু উপাদান বাকি থাকে
    while (j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    // মিশ্রিত অ্যারে দেখানো
    cout << "Merged Sorted Array: ";
    for (int x = 0; x < size1 + size2; x++) {
        cout << merged[x] << " ";
    }
    cout << endl;
}
int main() {
    int size1, size2;
    // প্রথম অ্যারে ইনপুট
    cout << "Enter size of first sorted array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter " << size1 << " sorted elements:\n";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
// দ্বিতীয় অ্যারে ইনপুট
    cout << "Enter size of second sorted array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter " << size2 << " sorted elements:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    // মিশ্রিত ফাংশন কল
    mergeArrays(arr1, size1, arr2, size2);
    return 0;
}
