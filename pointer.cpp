#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int *aptr=a;
    cout<<*aptr<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<*aptr<<endl;
        aptr++;
    }
   
    return 0;
}