// implementing queue using linked list 
#include<bits/stdc++.h>
int f=-1;
int r=-1;
using namespace std;
struct node {
    int data;
    struct node *next;
}*head=NULL, *tail=NULL;
void enqueue(int data){
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    struct node *temp=tail;
    newnode ->data=data;
    newnode ->next =NULL;
    if(f==-1 && r==-1){
        temp=newnode;
        head=newnode ;
        tail=newnode ;
        f++;
        r++;
    }
    else {
        tail->next =newnode ;
        tail=newnode ;
        r++;
    }
}
void dequeue(){
    struct node *temp=head;
    if(f==-1 && r==-1){
        cout<<"cannot delete empty queue";
        return ;
    }
    else{
        f++;
        
        head=head->next;
        free(temp);
    }
}
void display(){
    struct node *temp=head;
    while(temp->next!=0){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main()
{
    enqueue(7);
    enqueue(18);
    enqueue(6);
    display();
    cout<<f<<endl;
    cout<<r<<endl;

    dequeue();
    cout<<f<<endl;
    cout<<r<<endl;
    display();
    return 0;
}