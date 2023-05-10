#include<iostream>
using namespace std;
int main()
{
    int n,lastd;
    int rev=0;
    cin>>n;
    while(n>0)
    {
        lastd=n%10;
        rev=rev*10+lastd;
        n=n/10;

    }cout<<rev;



    return 0;
}