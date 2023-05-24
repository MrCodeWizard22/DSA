#include<iostream>
using namespace std;
void rep(string s){
    if(s.length()==0)
    return;
    else if (s[0]=='p'&& s[1]=='i')
    {
        cout<<"3.14";
        string ros=s.substr(2);
        rep(ros);
        cout<<ros;
    }
    return;
}
int main()
{
    string a="piyupishpi";
    rep(a);

    return 0;
}