// reversing the circular linked list 
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data; 
    struct node *next ;
}
void create(struct node ** head , struct node **tail, int data){
    struct node *newnode =(struct node * )malloc (sizeof(struct node ));
    struct node *temp=*head;

    if(*head==NULL){
        *head=newnode;
        *tail=newnode;
        temp=newnode ;
        newnode ->next =*head;
    }
    else {
        temp->next =newnode;
        (*tail)->next =newnode ;
        (*tail)=tail->next;
        (*tail)
        
    }
}
void reverse (struct node ** head , struct node **tail){
    struct node *current=*head;
    struct node *prev=*tail;
    struct node *nextnode  =*head;

    while(nextnode !=*head){
        nextnode =current->next;
        current->next =prev;
        current=nextnode;
        prev=current;


    }

}
int main(){
    return 0;
}