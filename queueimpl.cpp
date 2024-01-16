#include<bits/stdc++.h>
using namespace std;
void enqueue(int x);
void dequeue();
int front();
bool isempty();
stack<int> one;
stack<int> two;

void enqueue(int x){
    one.push(x);
}

void dequeue(){
    if(isempty()){
        cout << "Queue is empty" << endl;
        return;
    }

    if(two.empty()){
        
        while(!one.empty()){
            two.push(one.top());
            one.pop();
        }
    }

    int temp = two.top();
    two.pop();

    cout << temp << endl;
}

int front(){
    if(isempty()){
        cout << "Queue is empty" << endl;
        return -1;
    }

    if(two.empty()){
        while(!one.empty()){
            two.push(one.top());
            one.pop();
        }
    }

    return two.top();
}

bool isempty(){
    return one.empty() && two.empty();
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(7);
    enqueue(49);

    cout << "Front: " << front() << endl;

    dequeue();

    cout << "Front: " << front() << endl;

    return 0;
}
