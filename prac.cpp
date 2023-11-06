#include <bits/stdc++.h>
using namespace std;
struct node {
    int data ;
    struct node *next;
}*head =NULL,*tail=NULL;
void enqueue(int data){
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    struct node *temp=tail;
    newnode ->data=data;
    newnode ->next =NULL;
    if(head ==NULL && tail==NULL){
        temp=newnode;
        head=newnode ;
        tail=newnode ;
       
    }
    else {
        tail->next =newnode ;
        tail=newnode ;
       
    }
}
void dequeue()
{
    struct node *temp=head;
    if(head ==NULL){
        printf("the queue is empty ");
        return ;
    }
    else {
        head =head ->next;
        temp->next=NULL;
        delete (temp);
    }
}
void display(){
    struct node *temp=head;
    while(temp->next!=0){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(6);
    enqueue(7);
    
    display();
    dequeue();
    display();
    enqueue(8);
    enqueue(12);
    display();
    return 0;
}