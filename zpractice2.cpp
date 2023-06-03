#include<iostream>
using namespace std;
int search(int a[],int n)
{
    int s=0;
    int e=n;
    int mid;
    while(s<e){
        mid=s+(e-s)/2;
        if(a[mid]<a[mid+1])
        s=mid+1;
        else 
        e=mid;
    }
    return mid;

}
int main()
{
    int arr[7]={1,2,3,4,5,2,1};
    cout<<search(arr,7);
    return 0;
}