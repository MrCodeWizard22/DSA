// insertion at head in a doubly linked list 
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


void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    
    insertAtHead(&head, 3);
    insertAtHead(&head, 2);
    insertAtHead(&head, 1);

    printf("Doubly Linked List: ");
    printList(head);

    return 0;
}
