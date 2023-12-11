// reversing a string using stack 
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s="neworld";
    stack<char>st;
    for(char c:s){
        st.push(c);
    }
    int i=0;
    while(!st.empty()){
        s[i++]=st.top();
        st.pop();
    }
    cout<<s<<endl;
    return 0;
}