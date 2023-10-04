// deletion from head in a doubly linked list 
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
void deletehead(struct Node ** head){
    struct Node *temp=*head;
    temp=temp->next;
    temp->prev=NULL;
    *head =temp;
}


void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
}

int main() {
    struct Node* head = NULL;

    
    insertAtHead(&head, 18);
    insertAtHead(&head, 49;
    insertAtHead(&head, 45);

    deletehead(&head);
    printList(head);

    return 0;
}