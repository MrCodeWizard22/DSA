// learning about character arrays and strings
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10];
    cin>>str;
    cout<<"Your string is "<<str<<endl;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"The length of the string is  "<<count<<endl;
    return 0;
}
