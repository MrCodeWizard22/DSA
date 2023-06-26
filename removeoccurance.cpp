#include<bits/stdc++.h>
using namespace std;
string remove(string str,string part){
    while(str.length()!=0 && str.find(part)<str.length()){
        str.erase(str.find(part),part.length());

    }
    return str;
} 
int main()
{
    string s,part;
    cout<<" Enter the string and the part you want to remove";
    cin>>s>>part;
    cout<<remove(s,part);

    return 0;
}