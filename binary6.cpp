// book allocation problem
// number of maximum pages allocated to a student should be minimum
#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int stcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];

        }
        else
        {
            stcount++;
            if(stcount>m){
                return false;
            }
        
        pagesum=arr[i];
        }
    }
    return true;
}
int allocation(int arr[],int n,int m){
    int s=0,mid,ans=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    while(s<=e){
            mid=s+(e-s)/2;
            if(ispossible(arr,n,m,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;

            }
    }
    return ans;
}
int main()
{
    int arr[4]={10,20,30,40};
    cout<<allocation(arr,4,2);
    return 0;
}