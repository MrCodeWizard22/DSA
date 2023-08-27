// binary search using recursion
#include<bits/stdc++.h>
using namespace std;
bool search(int arr[], int key ,int s, int e){

    

    if(s>e)
    return false;
    int mid=s+(e-s)/2;

    if(arr[mid]==key)
    return true;

    else if(arr[mid]<key)
    return search(arr,key,mid+1,key);

    else
    return search(arr,key,s,mid-1);


}
int main()
{
    int arr[7]={1,3,4,5,6,8,9};
    int n=7;
    int key=3;
    int s=0;
    int e=n;
    int index=search(arr,key,s,e);
    if(index)
    cout<<"element found";

    else
    cout<<"element not found";
    return 0;
}