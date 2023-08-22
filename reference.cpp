#include<bits/stdc++.h>
using namespace std;
void update(int &a){
    a++;
}
int main(){
    int i=5;
    int &j=i;                       //reference variable
    cout<<i<<" "<<j<<endl;
    
    cout<<"before update "<<i<<endl;

    update(i);                          //call by reference new memory doesn't get allocated 
    cout<<"after update "<<i;

    
    return 0;

}