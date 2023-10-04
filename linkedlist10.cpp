// deletion from tail in a doubly linked list 
#include <bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};


void insertAtHead(struct Node** head, int data) {
    
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->prev = NULL;

    
    if (*head == NULL) {
        newnode->next = NULL;
        *head = newnode;
    } else {
        
        newnode->next = *head;
        (*head)->prev = newnode;
        *head = newnode;
    }
}
// void deletehead(struct Node ** head){
//     struct Node *temp=*head;
//     temp=temp->next;
//     temp->prev=NULL;
//     *head =temp;
// }

void deletepos(struct Node ** head,int pos){
    struct Node *temp=*head;
    struct Node *current=*head;
    struct Node *nex=*head;

    // if(*head==NULL)
    // return ;

    // if(pos ==0){
    //     deletehead(head);
    // }

    int count =0;
    while(count<pos && temp!=0){
        current=temp;
    temp=temp->next;
    nex=nex->next;
    count ++;
    }
    nex=nex->next;
    current->next=nex;
    nex->prev=current;

    free(temp);
    
}


void printList(struct Node* head) {
    struct Node* current = head;
    while (current->next != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("%d",current->data);
}

int main() {
    struct Node* head = NULL;

    
    insertAtHead(&head, 18);
    insertAtHead(&head, 49);
    insertAtHead(&head, 45);
    insertAtHead(&head ,44);
    insertAtHead(&head,78);
    insertAtHead(&head,89);

    deletepos(&head,3);
    printList(head);

    return 0;
}