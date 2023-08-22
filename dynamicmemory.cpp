#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=5;            //static memory allocation is the allocation of memory in stack and
    int *j=new int;                    // dynamic memory allocation is the allocation of memory in heap 12 bytes 4 for new int and 8 for pointer

    int n;
    cin>>n;

    int *arr=new int[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    for(int k=0;k<n;k++)
    cout<<arr[k]<<endl;

    delete []arr;           //delete is used to delete the allocated memory in a heap 
    delete j;               //we need to delete to heap memory manually while in stack it is automatically deleted
    


    return 0;

}