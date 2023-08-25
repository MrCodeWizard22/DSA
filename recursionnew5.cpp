// checking wether the array is sorted 
#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n){
    if(n==0 || n==1)
    return true;

    if(a[0]>a[1])
    return false;

    else 
    {
        bool r=check(a+1,n-1);
        return r;
    }
}
int main()
{
    int arr[5]={1,3,2,4 ,5};
    int n=5;

    cout<<check(arr,n);
    return 0;
}