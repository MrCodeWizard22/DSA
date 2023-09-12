// finding first and last occurarnce of element in sorted array binary search algo 
#include<bits/stdc++.h>
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
int main(){
    int arr[7]={1,2,3,3,3,3,4};
    int first=search(arr,7,3);
    std:: cout<<first;
    int last=searchr(arr,7,3);
    std::cout<<last;
    return 0;
}