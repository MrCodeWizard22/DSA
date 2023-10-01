// finding length of the linked list 
#include<stdlib.h>
#include <stdio.h>
struct node {
    int data;
    struct node *next;
};
void inserttail(struct node ** head, int data){
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    struct node *temp=*head;
    newnode ->data=data;
    newnode ->next=NULL;
    if(*head==0)
        *head =newnode;
    
    else {
        while(temp->next!=0){
            temp=temp->next;
        }
        temp->next =newnode;
    }
}
void print (struct node ** head){
    struct node *ptr =*head;
    while(ptr->next!=0){
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
}
// void deletehead(struct node **head){
//     struct node *temp=*head;
//     *head =temp->next;
//     temp->next =NULL;
//     // free(temp);
// }
// void deletetail(struct node ** head){
//     struct node *temp=*head;
//     struct node *prev=*head;
//     while(temp->next !=NULL){
//         prev=temp;
//         temp=temp->next;
//     }
//     prev->next=NULL;
//     // free(prev);
// }
// void deletepos(struct node** head ,int pos){
//     int index=0;
//     struct node *temp=*head;
//     struct node *prev=*head;
//     while(temp->next !=0 && index<pos){
//         prev=temp;
//         temp=temp->next;
//         index++;

//     }
//     prev->next =temp->next;
//     temp->next=NULL;
// }
int length(struct node **head ){
    struct node *temp=*head;
    int count =1;
    while(temp->next!=0){
        count ++;
        temp=temp->next;

    }
    return count;
}
int main()
{
    struct node *head=0;
    inserttail(&head ,10);
    inserttail(&head ,7);
    inserttail(&head ,49);
    inserttail(&head, 18);
    inserttail(&head ,45);
    // deletehead(&head);
    // deletetail(&head);
    // deletepos(&head ,3);
    // deletehead(&head);
print (&head);

    printf("\n%d",length(&head));
    
    return 0;
}