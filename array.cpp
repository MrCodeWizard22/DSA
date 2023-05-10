#include<iostream>  // for max in an array
#include<climits>
using namespace std;
int main()
{
    int n,i;
    int max=INT_MIN;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    for(i=0;i<n;i++){
    if(arr[i]>max)
    {max=arr[i];
    }}cout<<max;
    return 0;
}