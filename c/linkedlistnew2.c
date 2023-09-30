#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void inserttail(struct node **head, int data)
{
    struct node *temp = *head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (*head == 0)
        *head = newnode;
    
    else{
    while (temp->next != 0)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    }
}
void print(struct node **head)
{
    struct node *ptr = *head;
    while (ptr->next != 0)
    {
        printf("%d -->", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}
int main()
{
    struct node *head;
    head = NULL;
    inserttail(&head, 6);
    inserttail(&head, 8);
    inserttail(&head ,7);
    print(&head);
    return 0;
}