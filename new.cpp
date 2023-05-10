#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=2;j<i;j++)
        {
           if(i%j==0)
            break;
           else{
           cout<<i;break;}}}
    return 0;
}