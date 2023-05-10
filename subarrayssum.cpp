#include<iostream>              //subarrays sum
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in an array";
    cin>>n;
    int arr[n];
    cout<<"enter the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            cout<<"\n"<<sum;
        }
    }
    return 0;
}