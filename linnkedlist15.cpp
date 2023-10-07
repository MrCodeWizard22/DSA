// implementing cicular linked list 
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next ;

};
void create(struct node ** head, int data){
    struct node *newnode =(struct node *)malloc (sizeof(struct node) );
    struct node *temp=*head;

    newnode ->data=data;
    if(*head==NULL){
        *head=newnode ;
        temp=newnode ;
    }
    else {
        temp->next=newnode ;
        temp=newnode ;

    }
    temp->next =*head;

}
void display(struct node ** head){
    struct node *temp=*head;
    while(temp->next !=*head){
        cout<<temp->data<<" -->";
        temp=temp->next ;

    }
    cout<<temp->data<<;
    // temp=temp->next ;
    // cout<<temp->data;
}
int main(){
    struct node *head=NULL;

    create(&head, 7);

    create(&head, 5);
    display(&head);
    return 0;
}