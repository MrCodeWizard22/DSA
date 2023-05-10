#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"enter the character ";
    cin>>a;
    if(a>=65 && a<=90)
    cout<<" it is upper case ";
    else if(a>=97 && a<=122)
    cout<<"it is of lower case";
    else if (a>=48 && a<=57)
    cout<<"it is digit";
    else 
    cout<<"it is unrecognizable";
    
    return 0;
}