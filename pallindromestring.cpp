#include<bits/stdc++.h>
using namespace std;
bool pallindrome(char str[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main(){
    char str[10];
    int n;
    cin>>n;
    cin>>str;
    cout<<pallindrome(str,n);
    return 0;
}