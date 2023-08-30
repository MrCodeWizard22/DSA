// merge sort using recursion 
#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e){
    int mid=s+(e-s)/2;

    int l1=mid-s+1;

    int l2=e-mid;

    int *arr1=new int [l1];

    int *arr2=new int [l2];

    int index1=s;

    for(int i=0;i<l1;i++){
        arr1[i]=arr[index1++];
       
    }

    int index2=mid+1;

    for(int i=0;i<l2;i++){
        arr2[i]=arr[index2++];
        

    }
    int i=0;
    int j=0;
    index1=s;

    while(i<l1 && j<l2){
        if(arr1[i]<arr2[j]){
            arr[index1++]=arr1[i++];
            
        }
        else{
            arr[index1++]=arr2[j++];
            
        }
    }
    while(i<l1){
        arr[index1++]=arr1[i++];
        
    }
    while(j<l2){
        arr[index1++]=arr2[j++];
        
    }


}
void mergesort(int *arr, int s, int e){
    if(s>=e)
    return;

    int mid=s+(e-s)/2;

    mergesort(arr,s,mid);               //left part

    mergesort(arr,mid+1,e);             //right part

    merge(arr,s,e);
}
int main()
{
    int arr[7]={100,8,90,50,40,2,1};
    int s=0;
    int e=7;
    int size=7;

    mergesort(arr,s,e);

    for(int i=s;i<e;i++)
    cout<<arr[i]<<endl;
    return 0;
}