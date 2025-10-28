#include<bits/stdc++.h>
using namespace std;
#define N 10 ///***** no semicolon
int Q[N] = {0};
int f = -1, r = -1;///******
bool isEmpty() {
    if (f == -1 && r == -1)
        return true;
    return false;
}
bool isFull() {
    if ((r+1)%N == f)
        return true;
    return false;
}
void enqueue(int x) {
    if (isFull()) {
        cout << "Queue is already full!" << endl;
        return;
    }
    if (isEmpty())
        f = r = 0;
    else
        r = (r+1)%N;

    Q[r] = x;///*****
}
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is already empty!" << endl;
        return;
    }
    if (f == r)
        f = r = -1;
    else
        f = (f+1)%N;
}
int peek() {
    if (isEmpty())
        return -1;
    return Q[f];
}
void Print() {
    if (isEmpty()) {
        cout << "Queue is already empty!" << endl;
        return;
    }
    cout << "Queue: ";
    int i = f; ///*****
    while (true) { ///******
        cout << Q[i] << " ";
        if (i == r) 
        break;
        i = (i+1)%N;
    }
    cout << endl;
}
int main() {
    enqueue(2);
    Print();
    enqueue(5);
    Print();
    enqueue(10);
    Print();
    dequeue();
    Print();
    enqueue(11);
    Print();
    dequeue();
    Print();
    cout << "Front: " << peek() << endl;
    enqueue(2);
    Print();
    return 0;
}