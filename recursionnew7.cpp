// linear search using recursion
#include<bits/stdc++.h>
using namespace std;
bool search(int arr[], int n, int key){
    
    if(n==0)
    return false;
    if (arr[0]==key)
    return true;
    else
    return search(arr+1,n-1,key);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int key=3;
    int n=5;

    cout<<search(arr,n,key);
    return 0;
}