// wrong till now 
#include<bits/stdc++.h>
using namespace std;
void reverse(string str){
    int s=0;
    int e=str.length()-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
    cout<<str<<" "<<endl;
}
void split(string s){
    string temp="";
    int i=0;
    int e=s.length()-1;
    while(i<e){
        if(s[i]==' '){
            int n=i;
            for(int j=0;j<n;j++)
                temp.push_back(s[j]);

            i++;
        }
        
        reverse(temp);
        i++;
    }
}
int main()
{
    string s;
    cin>>s;
    split(s);

    return 0;

}