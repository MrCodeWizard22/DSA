#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data ;
    node *next;

    node (int n){
        this->data=n;
        this->next=NULL;
    }

};
void insertattail(node *&tail, int d){
    node *temp=new node (d);
    tail->next=temp;
    tail=tail->next;
}
void insert(node * &head ,int d){
    node *temp=new node (d);
    temp->next=head;
    head =temp;

}
void print (node *&head ){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node *start=new node (10);
    node *head =start;
    node *tail=start;
    print (head );

    //inserting an element at the starting of the linked list 

    insert(head,50);
    print (head);

    // taking the input of node from the user and then inserting it in the begining
    int n;
    cout<<"enter the node data to insert int the front ";
    cin>>n;

    insert(head, n);
    print (head);

    // inserting the element at the tail 

    insertattail(tail,200);
    print (head);



    return 0;
}