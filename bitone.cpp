#include<iostream>
using namespace std;
int main()
{
    int a;
    int n=0;
    cout<<"enter the number";
    cin>>a;
    while(a<0){
        a=(a&(a-1));
        n++;

    }
    cout<<n;
    return 0;

}