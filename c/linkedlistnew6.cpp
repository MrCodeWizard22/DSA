#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void create(int data, struct node **head) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL) {
        *head = newnode; 
    } else {
        struct node *temp = *head; 

       
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->prev = temp;
    }
}

void print (struct node ** head ){
    struct node *temp=*head;
    while(temp->next!=0){
        printf("%d-->",temp->data);
        temp=temp->next;

    }
    printf("%d",temp->data);
}
int main()
{
    struct node *head=NULL;
    create(7,&head);
    create(49,&head);
    create(18,&head);
    print(&head);

    return 0;
}