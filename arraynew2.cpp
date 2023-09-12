#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,1,2,2,3};
    int u=0;
    for(int i=0;i<5;i++){
       u=u^arr[i];
    }
    cout<<u;
    return 0;
}