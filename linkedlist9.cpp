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
void deletetail(struct Node ** head){
    struct Node *temp=*head;
    struct Node *current=*head;
    while(temp->next!=0){
        current=temp;
    temp=temp->next;

    }
    current->next=NULL;
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

    deletetail(&head);
    printList(head);

    return 0;
}