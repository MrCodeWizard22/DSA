#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i])
        min=arr[i];

    }
    cout<<min;
    return 0;
}