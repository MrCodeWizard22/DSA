#include<iostream>
using namespace std;
void fibonaci(int p)
{
    int t1=0;
    int t2=1;
    int last;
    for(int j=1;j<=p;j++){
        cout<<t1<<endl;
        last=t1+t2;
        t1=t2;
        t2=last;

    }

}
int main()
{
    int n;
    cin>>n;
    
        fibonaci(n);
        cout<<endl;
    
    return 0;
}