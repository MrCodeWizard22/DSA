//arithmatic subarray is when a[i]-a[i-1]=constant
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of elements in an array";
    cin>>n;
    int arr[n];
    cout<<"now enter the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int current=2,j=2;
    int ans=2;
    while(j<n){
        if(pd==arr[j]-arr[j-1])
        current++;
        else
        {
            pd==arr[j]-arr[j-1];
            current=2;
        }ans=max(current,ans);
        j++;
    }
    cout<<ans;

    return 0;
}