#include<iostream>
using namespace std;
int fact(int f)
{
    int fa=1;
    for(int i=1;i<=f;i++){
        fa=fa*i;
    }return fa;
}
int main()
{
    int n,r,value,g;
    
    cout<<"give the value of n and r for ncr";
    cin>>n>>r;
    g=n-r;
    value=fact(n)/(fact(g)*fact(r));
    cout<<value;

    return 0;
}

