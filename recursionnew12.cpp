// sorting an array (bubble sort) using recursion
#include<bits/stdc++.h>
using namespace std;
void sort(int *arr, int n){
    if(n==0 || n==1)
    return ;
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }

    sort(arr,n-1);

}
int main()
{
    int arr[6]={2,6,7,3,3,5,};
    int n=6;
     
    sort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    
    return 0;
}