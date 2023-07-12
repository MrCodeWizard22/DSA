// printing matrix in spiral order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[12][12],n;
    cout<<"enter the size of the matrix";
    cin>>n;
    cout<<"now enter the matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    int sr=0;
    int er=n-1;
    int sc=0;
    int ec=n-1;
    int total=(er+1)*(ec+1);
    int count=0;
    while(count<total){
        for(int i=sc;i<=ec && count<total;i++){
            cout<<arr[sr][i]<<" ";
            count++;
            
        }
        sr++;
        for(int i=sr;i<=er && count <total;i++){
            cout<<arr[i][ec]<<" ";
            count++;
            
            
        }ec--;
        for(int i=ec;i>=sc && count <total;i--){
            cout<<arr[er][i]<<" ";
            count++;

        }
        er--;
        for(int i=er;i>=sr && count<total;i--){
            cout<<arr[i][sc]<<" " ;
            count++;
        }
        sc++;

    }
    
    return 0;
}