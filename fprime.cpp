#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int j=2;j<n;j++){
        if(n%j==0)
        return false;
    }return true;
}
int main()
{
    int num,num2;
    cout<<"enter the numbers";
    cin>>num>>num2;
    for(int i=num;i<=num2;i++)
    {
        if(prime(i))
        cout<<i<<endl;
    }
    return 0;
}