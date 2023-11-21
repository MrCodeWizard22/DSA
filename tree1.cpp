#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *right ,*left;

} ;
struct node *create(){
    int x;
    struct node *newnode =(struct node *)malloc (sizeof(struct node ));
    cout<<"enter the value ";
    cin>>x;
    if(x==-1){
        return 0;
    }
    newnode ->data=x;
    cout<<"enter the left child";
    newnode ->left=create();

    cout<<"enter the right child";
    newnode ->right =create();

    return newnode ;
}


// traversal of the tree preorder postorder and inorder 

// preorder traversal 

void preorder (struct node *root ){
    if(root== NULL){
        return ;
    }
    cout<<root->data<<" ";

    preorder(root ->left );
    preorder(root ->right);
}

// postorder traversal 

void postorder(struct node *root ){
    if(root ==0){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}
void inorder(struct node *root ){
    if (root ==0){
        return ;
    }
    inorder(root->left );
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    struct node *root =NULL;
    root =create();
    cout<<"preorder traversal"<<endl;
    preorder (root );
    cout<<"postorder traversal"<<endl;
    postorder(root);
    cout<<"inorder traversal"<<endl;
    inorder(root);
    return 0;
}