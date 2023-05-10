#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of elements in an array";
    cin>>n;
    int arr[n];
    cout<<"now enter the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }int mx=arr[0];
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<"the max till "<<i<<"  "<<mx<<"\n";
    }

    return 0;
}
