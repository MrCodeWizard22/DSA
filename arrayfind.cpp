#include<iostream>               //binary search
using namespace std;
int find(int n,int arr[],int key)
{
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid;
        mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;

        }else if(arr[mid]>key){
            e=mid-1;

        }else
        s=mid+1;
    }
    
        
    
    return -1;
}

int main()
{
    int n,key;
    cout<<"enter the number of elements in an array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in assending order";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }cout<<"enter the key";
    cin>>key;
    cout<<"the index of the element is   ";
    cout<<find(n,arr,key);
    return 0;
}