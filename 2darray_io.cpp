#include<iostream>      //to find the index of element of an element in matrix
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the no of rows and columns";
    cin>>n>>m;
    int a[n][m];
    cout<<"now enter the matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }cout<<"was it that\n ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<"\t";
        }cout<<"\n";
    }int x;
    cout<<"enter the element to be searched";
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                cout<<"index of that is\t"<<i<<","<<j<<"\n";
            }
        }
    }
    return 0;
}