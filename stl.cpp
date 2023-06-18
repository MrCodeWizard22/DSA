// learning basic stl functions in in stl of c++
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    cout<<"front "<<v.front()<<endl;
    cout<<"last "<<v.back()<<endl;
    v.clear();
    cout<<"size "<<v.size()<<endl;
    return 0;
}