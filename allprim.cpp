#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    int i,j;
    cin>>n;
    for(i=3;i<n;i++){
        c=0;
       for(j=2;j<i;j++){
        if(i%j==0){
       c++;
       break;
       }
       if(c==0 && i!=1){
    cout<<i<<endl;}}

    }
    return 0;


    
}