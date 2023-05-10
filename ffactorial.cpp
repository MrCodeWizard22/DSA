#include<iostream>
using namespace std;
int fact(int f)
{
    int fa=1;
    for(int i=1;i<=f;i++){
        fa=fa*i;
    }return fa;
}

int main()
{
    int n;
    cout<<"enter the number whose factorial you want";
    cin>>n;
    cout<<"\nAnd the factorial of  "<<n<<"  is  "<<fact(n);
    return 0;
}