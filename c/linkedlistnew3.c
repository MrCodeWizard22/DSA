// learning insertion of node in linked list
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
};
void inserthead(struct node ** head ,int data){
    struct node *newnode=(struct node *)malloc (sizeof(struct node ));
    newnode ->data =data;
    newnode ->next  =*head;
    *head=newnode;

}

void insertpos(struct node ** head,int data, int pos){
    int index =0;
    struct node *temp=*head;
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    struct node *prev=*head;
    newnode ->data=data;
    if(*head==0){
       * head =newnode ;
       newnode ->next=NULL;

    }

    while(temp->next !=0 && index <pos){
        prev=temp;
        temp=temp->next;
        index++;

    }
    if(temp->next==NULL){
        newnode ->next =NULL;
        temp->next =newnode;
    }
    else {
        newnode ->next=prev->next;
        prev->next =newnode ;
    }


}
void print (struct node  ** head ){
    struct node *ptr=*head;
    while(ptr->next !=0){
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
}
int main()
{
    struct node *head =0;
    inserthead(&head ,5);
    inserthead(&head ,8);
    inserthead(&head ,10);
    inserthead(&head,80);
    insertpos(&head,15,2);
    insertpos(&head,100,10);
    print (&head);

    return 0;
}