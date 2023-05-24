#include<bits/stdc++.h>
using namespace std;
int search(int a[], int n,int key){
    int s=0;
    int e=n;
    int ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==key){       
        ans=mid;
        e=mid-1;
        }
        else if(a[mid]>key)
        e=mid-1;
        else 
        s=mid+1;
    }
    return ans;
}
int searchr(int a[], int n,int key){
    int s=0;
    int e=n;
    int ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==key){       
        ans=mid;
        s=mid+1;
        }
        else if(a[mid]>key)
        e=mid-1;
        else 
        s=mid+1;
    }
    return ans;
}
int main()
{
    int arr[7]={1,3,5,5,5,6,7};
    cout<<search(arr,7,5)<<"  "<<searchr(arr,7,5);
    return 0;
}