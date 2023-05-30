/*pivot element  in rotated array */
#include<iostream>
using namespace std;
int search(int a[],int n){
    int s=0;
    int e=n;
    int mid;
    while(s<e){
        mid=s+(e-s)/2;
        if(a[0]<=a[mid])
        s=mid+1;
        else 
        e=mid;

    }
    return s;
}
int main()
{
    int arr[6]={7,9,10,1,2,3};
    cout<<"pivot element is  "<<arr[search(arr,6)];
    return 0;
}