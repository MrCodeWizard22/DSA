// reversing the doubly linked list 
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next ;
    struct node *prev;
};
void create(struct node ** head, struct node ** tail ,int data){
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    newnode ->data=data;
    newnode ->next =NULL;
    newnode ->prev=NULL;

    if(*head==NULL){
        *head=newnode ;
        *tail=newnode;
    }
    else {
        (*tail)->next =newnode ;
        newnode ->prev=*tail;
        *tail=newnode;
    }
}
void display(struct node ** head){
    struct node *temp=*head;
    while(temp->next!=0){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<temp->data;
}
void reverse(struct node ** head , struct node ** tail){
    struct node *current=*head;
    struct node *nextnode=*head;
    while(nextnode!=0){
        nextnode =current->next ;
        current ->next =current ->prev;
        current ->prev=nextnode;
        current =nextnode;
    }
    struct node *temp = *head;
    *head = *tail;
    *tail = temp;
}
int main()
{
    struct node *head=nullptr;
    struct node *tail=nullptr;

    create(&head, &tail, 7);
    create(&head, &tail, 49);
    create(&head, &tail,18);
    create(&head, &tail , 45);
    display(&head);
    cout<<endl;
    reverse(&head , &tail);
    display(&head);
    cout<<endl;
    cout<<endl;
    return 0;
}