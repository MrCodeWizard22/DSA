#include<iostream>
using namespace std;
int binarytodecimal(int n)
{
    int ls=0;
    int x=1;
    int y;
    while(n>0){
        y=n%10;
        ls+=x*y;
        x=x*2;
        n=n/10;

    }return ls;
}
int main()
{
    int n,num;
    cin>>n;
    num=binarytodecimal(n);
    cout<<num;
    return 0;
}