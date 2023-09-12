// search element in rotated array 
#include<iostream>
using namespace std;
int pivot(int a[],int n){
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
int search(int a[],int n,int key){
    int s=0;
    int e=n;
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(a[mid]==key)
        return mid;
        else if (a[mid]<key)
        s=mid+1;
        else 
        e=mid-1;
    }
    return -1;
}

int main()
{
    int arr[10],n,piv,ele,key;
    cin>>n;

    for (int i=0;i<n;i++)
    cin>>arr[i];
    piv=pivot(arr,n);
    cout<<piv;
    cin>>key;
    ele=search(arr+2,2,key);
    cout<<ele;
    return 0;
}