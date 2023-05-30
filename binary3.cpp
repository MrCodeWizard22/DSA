//peak element in a mountain array 
#include<iostream>
using namespace std;
int search(int a[], int n){
    int s=0,ans,mid;
    int e=n-1;
    while(s<e){
        mid=(s+e)/2;      //s+(e-s)/2
        if(a[mid]<a[mid+1])
        {
            s=mid+1;
        }
        else
        e=mid;
        

    }
    return mid;

}
int main(){
    int arr[8]={1,2,3,4,8,3,2,1};
    cout<<arr[search(arr,8)];
    return 0;
}