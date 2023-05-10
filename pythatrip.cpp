//pythagorian triplet
#include<iostream>
using namespace std;
bool pyth(int a,int b,int c)
{
    if(a*a==(b*b+c*c) || b*b==(a*a+c*c) || c*c==(a*a+b*b))
    return true;
    else
    return false;
}
int main()
{
    int m,n,o;
    cin>>m>>n>>o;
    if(pyth(m,n,o))
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}