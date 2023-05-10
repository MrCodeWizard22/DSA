//fibonacci series 
#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        return 0;

    }else if(n==2)
    return 1;
    else 
    return (fibo(n-1)+fibo(n-2));

}
int main()
{
    int n;
    cout<<"enter the number of terms in fibonacci series";
    cin>>n;
    cout<<"the fibonacci series is ";
    for(int i=1;i<=n;i++)
    cout<<"  "<<fibo(i);
    return 0;
}