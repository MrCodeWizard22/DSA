#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
};
void display(struct node ** head){
    struct node * temp=*head;
    while(temp->next!=NULL){
        printf("%d--",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void insert(struct node ** head,int data){
    struct node *temp=*head;
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    newnode ->data=data;

   
    
        newnode ->next =*head;
        *head=newnode ;

}
void reverse(struct node ** head ){
    struct node *prev=NULL;
    struct node *current=*head;
    struct node *nextnode=*head;
    while(nextnode!=NULL){
        nextnode=nextnode ->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    *head=prev;

}
int main(){
    struct node *head=NULL;
    insert(&head,18);
    insert(&head ,49);
    insert (&head, 45);
    insert (&head, 7);

    display(&head);
    cout<<endl;
    reverse(&head);
    display(&head);
    return 0;
}