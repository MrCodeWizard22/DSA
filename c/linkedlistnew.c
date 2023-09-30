#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
};
void insert(struct node ** head ,int data ){
    struct node *temp=(struct node* )malloc (sizeof(struct node ));
    temp->data=data;
    temp->next =*head;
    *head=temp; 
}
void print (struct node **head){
    struct node *ptr=*head;
    while(ptr->next!=0){
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
}
int main(){
    struct node *head=0;
    insert(&head, 8);
    // print (&head);
    insert(&head ,10);
    print (&head);
   
    return 0;
}