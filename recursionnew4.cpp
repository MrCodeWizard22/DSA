// digits of the number should be printed individually
#include<bits/stdc++.h>
using namespace std;
void print(int n, string arr[]){
    if(n==0)
    return ;
      print(n/10, arr);
    int rem=n%10;
    cout<<arr[rem];

   


}
int main()
{
    string arr[10]={
        "zero",
        "one","two","three","four","five","six","seven","eight","nine"
    };
    int n;
    cin>>n;

    print(n, arr);
    return 0;
}