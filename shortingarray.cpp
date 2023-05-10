#include<iostream>          //selection sort
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of elements in the array";
    cin>>n;
    int arr[n];
    cout<<"enter the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
        
    }cout<<"your sorted array is \n";
    for(int i=0;i<n;i++)
    cout<<"  "<<arr[i];
    return 0;
}