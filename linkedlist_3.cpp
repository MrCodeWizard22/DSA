// learning about deletion of nodes 
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
void insertatpos(node * &head, node *&tail,int position , int d){
    if(position==1){
        insert(head,d);
        return;
    }
    node *temp=head;
    int count =1;
    while(count <position-1){
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    // if(temp->next!=NULL)
    // cout<<"tempnext"<<temp->next<<endl;
    node *newnode =new node(d); 
    newnode->next=temp->next;
    temp->next=newnode;
    
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
    // int n;
    // cout<<"enter the node data to insert int the front ";
    // cin>>n;

    insert(head, 40);
    print (head);

    // inserting the element at the tail 

    insertattail(tail,200);
    print (head);


    // insertion in middle 
    // int postion=2;
    insertatpos(head, tail, 2, 60);
    print (head);

    insertatpos(head,tail, 1,11);
    print (head);

    insertatpos(head ,tail,7,18);
    print (head);


    // deletion of nodes

    
    return 0;
}