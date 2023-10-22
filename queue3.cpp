// implementing the circular queue using array 
// linear queue has a drawback that the memory was not fully ustilised if there is empty memory but we have dequeue
// then new element cannot get enqueued  so we need to use the circular queue
// formula to check whether the queue is full or not is 
// (r+1)%n==f      then the queue is considered to be full 
#include <bits/stdc++.h>
#define n 5
int arr[n];
int f=-1;
int r=-1;
using namespace std;
void enqueue(int data){
    if(f==-1 && r==-1){
        f++;
        r++;
        arr[r]=data;

    }
    else if((r+1)%n==f){
        cout<<"overflowed cannot insert the element "<<endl;
        return ;
    }
    else {
        r=(r+1)%n;
        arr[r]=data;
    }
}
void dequeue(){
    if(f==-1 && r==-1){
        cout<<"queue is empty "<<endl;
        return ;
    }
    else if(f==r){
        f=-1;
        r=-1;

    }
    else {
        f=(f+1)%n;
    }
}
void display(){
    if (f == -1 && r == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    int i = f;
    do {
        cout << arr[i] << endl;
        i = (i + 1) % n;
    } while (i != (r + 1) % n);
}
int main()
{
    enqueue(2);
    enqueue(-1);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    cout<<"now after dequeue"<<endl;
    dequeue();
    display();
    cout<<"enqueue one more element "<<endl;
    enqueue(10);
    display();
    cout<<"one more enqueue"<<endl;
    
    dequeue();
    enqueue(15);
    display();
    
    return 0;
}