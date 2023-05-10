#include<iostream>              //insertion sort
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of elements in the array ";
    cin>>n;
    int arr[1000];
    cout<<"now enter the array";

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int ele=arr[i];
        int j=i-1;
        while (arr[j]>ele && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1]=ele;
    }cout<<"your sorted array is \n";
    for(int i=0;i<n;i++){
        cout<<"  "<<arr[i];
    }
    return 0;
}