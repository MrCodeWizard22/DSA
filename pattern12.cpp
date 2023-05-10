#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    int temp;
    cout<<"enter the rows ";
    cin>>n;
    for(int i=1;i<=n;i++){
        count=i;
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<count;
            if(k<i || i==1)
            count++;
        }temp=count-1;
        for(int l=2;l<=i;l++){
            cout<<temp;
            temp--;
        }
        cout<<endl;
       
    }
    return 0;
}