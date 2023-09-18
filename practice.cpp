#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int i=0;
   
    while(i<3){
        for(int k=i;k<3;k++){
            cout<<arr[i][k]<<" ";
        }
        i++;
        for(int k=2;k>=0;k--){
            cout<<arr[i][k]<<" ";
        }
        i++;
        for(int k=0;k<3;k++){
            cout<<arr[i][k]<<" ";
        }
        i++;

    }
    return 0;
}