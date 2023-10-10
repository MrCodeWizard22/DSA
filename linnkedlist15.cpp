// implementing cicular linked list 
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next ;

};
void create(struct node ** head, struct node **tail,int data){
    struct node *newnode =(struct node *)malloc (sizeof(struct node) );
    struct node *temp=*head;

    newnode ->data=data;
    if(*head==NULL){
        *head=newnode ;
        temp=newnode ;
        *tail=newnode ;
    }
    else {
        temp->next=newnode ;
        temp=newnode ;

    }
    *tail=newnode ;
    temp->next =*head;

}

// insertion at head
void inserthead(struct node ** head, struct node **tail, int data){
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    newnode ->data=data;

    newnode ->next =*head;
    *head=newnode ;
    (*tail)->next =newnode ;

}
// insertion at tail 

void insertend(struct node **tail, int data){
    struct node *newnode=(struct node *)malloc (sizeof(struct node ));
    struct node *tamp=*tail;

    newnode ->data=data;

    newnode ->next =(*tail)->next ;
    (*tail)->next =newnode ;

    *tail=newnode ;



}

// insertion at position 

void insertpos(struct node **head, int data , int pos){
    struct node *newnode =(struct node *)malloc (sizeof(struct node));
    struct node *temp=*head;
    int count=1;

    newnode ->data=data;
    while(temp->next !=*head && count <pos-1){
        temp=temp->next;
        count++;
    }
    newnode ->next =temp->next;
    temp->next =newnode ;



}
void display(struct node ** head){
    struct node *temp=*head;
    while(temp->next !=*head){
        cout<<temp->data<<" -->";
        temp=temp->next ;

    }
    cout<<temp->data;
    // temp=temp->next ;
    // cout<<temp->data;
}
int main(){
    struct node *head=NULL;
    struct node *tail=NULL;

    create(&head,&tail, 7);

    create(&head,&tail, 5);

    inserthead(&head, &tail, 6);

    inserthead(&head , &tail, 8);

    insertend(&tail, 18);

    insertpos(&head, 102, 2);

    insertpos(&head, 105, 3);
    display(&head);
    return 0;
}