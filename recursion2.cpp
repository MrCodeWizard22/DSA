// to calculate the n*n*n*...p times ie n^p
#include<iostream>
using namespace std;
int powe(int n,int p){
    if(p==0)
    return 1;
    else 
    return (n*powe(n,p-1));
}
int main()
{
    int n,p;
    cout<<"enter the number and the powers";
    cin>>n>>p;
    cout<<"\n"<<powe(n,p);

    return 0;
}