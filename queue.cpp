// implementing the queue using array 
#include<bits/stdc++.h>
#define n 5
int arr[n];
int f = -1;
int r = -1;
using namespace std;

void enqueue(int data) {
    if (r == n - 1) {
        cout << "Queue is full. Cannot enqueue." << endl;
        return;
    }
    if (r == -1 && f == -1) {
        r++;
        f++;
        arr[r] = data;
    }
    else {
        r++;
        arr[r] = data;
    }
}

void dequeue() {
    if (f == -1 || f > r) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return;
    }
    f++;
}

void display() {
    for (int i = f; i <= r; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(2);
    enqueue(7);
    enqueue(49);
    enqueue(18);
    display();

    dequeue();
    dequeue();
    display();

    return 0;
}
