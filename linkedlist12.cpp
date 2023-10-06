// implementation of doubly linked list 
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void create(struct node ** head, struct node ** tail, int data){
    struct node *temp=*head;
    struct node *newnode =(struct node *)malloc(sizeof(struct node ));

    newnode ->data=data;
    newnode ->next =NULL;
    newnode ->prev=NULL;

    if(*head==NULL){
        *head=newnode;
        temp=newnode ;
        *tail=newnode ;
    }
    else {
        newnode->prev = *tail;
        (*tail)->next = newnode;
        *tail = newnode;
    }
}
void insertAtHead(struct node ** head , int data){
   struct node *newnode =(struct node *)malloc (sizeof(struct node));
   newnode ->data=data;
   newnode ->prev=NULL;
   newnode ->next =NULL;
   

   newnode ->next =*head;
   (*head)->prev=newnode;

   *head =newnode ;

}
void insertAtTail(struct node ** head , struct node ** tail, int data){
    struct node *newnode =(struct node *)malloc(sizeof(struct node));
    newnode ->data=data;
    newnode ->next=0;
    newnode ->prev=0;

    
    (*tail)->next =newnode ;
    newnode ->prev=*tail;
    *tail=newnode ;
}
void insertAtPos(struct node ** head, int data,int pos){
    int count =0;
    struct node *temp=*head;
    struct node *current=*head;
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    newnode->data=data;
    newnode ->next =NULL;
    newnode ->prev=NULL;
    while(temp!=0 && count <pos-1){
        current=temp;
        temp=temp->next;
        count ++;

    }
    newnode ->next =temp;
    temp->prev=newnode ;
    newnode ->prev=current;
    current->next =newnode ;
}
void display(struct node * *head ){
    struct node *temp=*head;
    while(temp->next!=NULL){
        printf("%d -->",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main(){
    struct node *head=NULL;
    struct node *tail=NULL;
    create(&head,&tail, 7);
    create(&head, &tail, 18);

    insertAtHead(&head, 49);
    insertAtTail(&head, &tail,5);
    insertAtHead(&head, 8);
    insertAtTail(&head,&tail, 2);
    insertAtPos(&head, 100, 2);
    display(&head);


    return 0;
}