// to find the factorial of a number 
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    else 
    return (n*fact(n-1));
}
int main()
{
    int a;
    cout<<"enter the number for the factorial  ";
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<fact(a);
    return 0;
}