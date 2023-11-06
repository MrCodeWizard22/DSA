#include <bits/stdc++.h>

/****************************************************************/

    // Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

/*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *current=head;
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *forw=current;
    while(forw-!=NULL){
        forw=current->next;
        current->next =prev;
        prev=current;
        current=forw;
    }
    return current;
    // Write your code here
}
// int main(){
//     LinkedListNode *head=NULL;
//     head=reverseLinkedList(head);
//     while()
    
//     return 0;
// }
int main(){
    
}