#include<iostream>
using namespace std;
int search(int a[], int n, int key){
  int s=0;
  int e=n-1,mid;
   mid=(s+e)/2;
  while(s<=e){
   
    if(a[mid]==key){
      return mid;
    }
    else if(a[mid]>key){
      e=mid-1;
    }
    else 
    mid=s+1;
    
  }
  return -1;
}

int main()
{
  int a;

  int arr[7]={2,3,4,5,6,7,8};
  
  cout<<search(arr,7,6);
  return 0;

}