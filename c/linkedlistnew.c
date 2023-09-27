#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
};
struct node* insert(struct node *head ,int data ){
    struct node *temp=(struct node *) malloc (sizeof (struct node));
    temp->data=data;
    temp->next =head ;
    head=temp;
    return head;
}
void print (struct node *head ){
    struct node *new = head;
    while(new->next!=0){
        printf("%d-->",new->data);
        new=new->next;
    }
    printf("%d",new->data);
}
int main(){
    struct node *head =  NULL;
    head = insert(head ,1);
    head = insert(head,2);
    print(head);
    return 0;
}