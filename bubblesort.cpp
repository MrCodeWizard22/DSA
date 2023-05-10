#include<iostream>          //bubble sort
using namespace std;
int main()
{
    int n,temp,count;
    int arr[10];
    cout<<"enter the number of elements in array ";
    cin>>n;
    cout<<"now enter the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    count=1;
    while (count<n){
        for(int i=0;i<n-count;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }

     count++;
    }cout<<"your sorted array is\n";
    for(int i=0;i<n;i++){
        cout<<"  "<<arr[i];
    }
    
    
    return 0;
}