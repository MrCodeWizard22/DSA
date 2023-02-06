#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    if((n&(n-1))==0)
    cout<<"it is power of 2 ";
    else 
    cout<<"not the power of 2";
    return 0;
}