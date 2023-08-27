// checking whether string is pallindrome using recursion
#include<bits/stdc++.h>
using namespace std;
bool check(string &s, int i, int j){
    
    if(i>j)
    return true;

    if(s[i]!=s[j])
    return false;

    else{
        i++;
        j--;
    check(s,i,j);
}
}
int main()
{
    string s="piyush";
    int i=0;
    int j=s.length()-1;

    if(check(s,i,j))
    cout<<"pallindrome";

    else 
    cout<<" not pallindrome";

    return 0;
}