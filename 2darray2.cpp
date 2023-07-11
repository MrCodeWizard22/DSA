// printing the matrix wave wise
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[12][12],n;
    cout<<"enter the size of matirx";
    cin>>n;
    cout<<"now enter the matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<n;i++)
            cout<<arr[i][j]<<" ";
            cout<<endl;

        }
        else{
            for(int i=n-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
            cout<<endl;

        }
    }
   

    return 0;
}