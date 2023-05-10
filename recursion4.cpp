//to find the array is sorted or not 
#include<iostream>
using namespace std;
bool sorted(int a[], int n){
    bool pr;
    if(n==1)
    return true;
    else 
    pr=sorted(a+1,n-1);

    return ((a[0]<a[1]) && pr);
}
int main()
{
    int arr[10],n;
    cout<<"enter the no of the elements in array";
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(sorted(arr,n))
    cout<<"your given array is sorted  ";
    else
    cout<<"the array is not sorted ";
    return 0;
}