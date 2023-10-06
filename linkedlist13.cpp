// deleting an element from a doubly linked list 
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next ;
    struct node *prev;

};
void create(struct node **head, struct node ** tail, int data){
    struct node *newnode =(struct node *)malloc(sizeof(struct node));
    struct node *temp=*head;

    newnode ->data=data;
    newnode ->next =0;
    newnode ->prev=0;

    if(*head== NULL){
        temp=newnode ;
        *head=newnode ;
        *tail=newnode;
    }
    else {
        newnode->prev = *tail;
        (*tail)->next = newnode;
        *tail = newnode;
    }
}
void deletebeg(struct node **head){
    struct node *temp;
    if(*head==NULL){
        printf("the list is empty");
        return ;
    }
    else {
        temp=*head;
        *head=(*head)->next;
        (*head)->prev=NULL;
        free (temp);

    }
}
void deleteend(struct node **tail){
    struct node *temp=*tail;
    if(*tail== NULL){
        cout<<"list is empty";
        return ;
    }
    else{
        (*tail)->prev->next =NULL;
        *tail=(*tail)->prev;
        free (temp);
    }
}
void deletepos(struct node **head , int pos){
    int i=1;
    struct node *temp=*head;
    if(pos==1){
        deletebeg(*&head);
    }
    else{
        while(i<pos){
            temp=temp->next;
            i++;

        }
        temp->prev->next=temp->next;
        temp->next ->prev=temp->prev;
        free(temp);
    }
}
void display(struct node ** head){
    struct node *temp=*head;
    while(temp->next !=0){
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main(){
    struct node *head=NULL;
    struct node *tail=NULL;
    create(&head,&tail,7);
    create(&head, &tail, 49);
    create(&head, &tail, 18);
    create(&head, &tail, 50);
    create(&head, &tail, 33);
    create(&head, &tail, 60);
    display(&head);
    cout<<endl;
    deletepos(&head, 3);
    display(&head);
    cout<<endl;
    deletebeg(&head);
    display(&head);
    cout<<endl;
    deleteend(&tail);
    display(&head);
    cout<<endl;
    return 0;
}