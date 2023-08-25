// finding sum of all elements in an array using recursion
#include<bits/stdc++.h>
using namespace std;
int findsum(int arr[], int n){
    if(n==1)
    return arr[0];
    else
    return arr[0]+findsum(arr+1,n-1);
}
int main(){
    int arr[5]={2,2,4,5,6};
    int n=5;
    cout<<findsum(arr,n);
    return 0;
}