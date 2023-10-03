// insertion at head in a doubly linked list 
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data ;
    struct node *next ;
    struct node *prev;
};
void inserthead(struct node **head ,struct node **tail,int data){
    struct node *newnode =new struct node();
    newnode->data=data;
    newnode ->prev=NULL;
    newnode ->next =NULL;
    if(*head==NULL && *tail==NULL){
        *head =newnode ;
        *tail=newnode ;
        

    } 
    else {
        newnode ->next =*head;
        (*head)->prev=newnode;
        *head=newnode ;
        
    }
}
void print (struct node ** head){
    struct node *temp=*head;
    while(temp->next!=0){
        cout<<temp->data<<"--";
    }
    cout<<temp->data;
}
int main()
{
    struct node *head ,*tail;
    head =NULL;
    tail=NULL;
    inserthead(&head,&tail,18);
    inserthead(&head,&tail,49);
    print (&head);
    return 0;
}