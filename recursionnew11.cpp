// finding a to the power b using recusrion 
#include<bits/stdc++.h>
using namespace std;
int powercalculate(int a, int b){
    if(b==0)
    return 1;

    return a*powercalculate(a,b-1);
}
int main(){
    int a;
    int b;
    cout<<"enter base";
    cin>>a;
    cout<<"enter the no. of power";
    cin>>b;

    

    cout<<powercalculate(a,b);
    return 0;
}