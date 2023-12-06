#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int >st;

    st.push(1);
    st.push(3);
    st.push(7);
    st.push(11);

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;
    
    return 0;
}