#include<bits/stdc++.h>
using namespace std;
int n=5;
// int arr[5];
int top=-1;
struct node {
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL;
void push(int data){
    struct node *newnode =(struct node *)malloc (sizeof(struct node));
    newnode ->data=data;
    newnode ->next=head;
    newnode ->prev=NULL;
    
    if(head!=NULL){
        (head)->prev=newnode;
    }
    head=newnode ;
    top++;
}

// }
void pop(){
    struct node *temp=head;
    head=(head)->next;
    temp->next=NULL;
    top--;
    delete(temp);
}
int peak(){
    return head->data;
}

// void push(int data){
//     if(top==n-1){
//         cout<<"stack is overflowen"<<endl;
//         return;
//     }
//     top++;
//     arr[top]=data;
// }
// void pop(){
//     if(top==-1){
//         cout<<"stack is underflowen"<<endl;
//         return ;
//     }
//     top--;
// }
// int peak (){
//     return arr[top];
// }
bool isfull(){
    return top==n-1;
}
bool isempty(){
    return top==-1;
}
int main() {
    
    // struct node *head=NULL;
    push(5);
    push(6);
    push(49);
    push(7);
    push(10);
    cout<<peak()<<endl;
    
    cout<<isfull()<<endl;
    cout<<isempty()<<endl;
    return 0;
}
