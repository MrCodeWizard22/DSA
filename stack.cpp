#include <iostream>
using namespace std;

const int n = 5; 
int stack[n];
int top = -1;

void push(int data) {
    if (top == n - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        stack[top] = data;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        top--;
    }
}

int peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1; 
    } else {
        return stack[top];
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(7);
    push(8);
    push(10);
    push(45);

    display();

    pop();
    display();

    return 0;
}
