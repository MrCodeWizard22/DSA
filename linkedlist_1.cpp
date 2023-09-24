#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int num;
    node *next;

    node(int n){
        this ->num=n;
        this->next=0;
        cout<<num<<endl;
        cout<<next<<endl;
    }
};
int main()
{
    node *obj=new node (400);
    

    return 0;
}