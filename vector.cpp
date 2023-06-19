// trying reverse of a vector in new way
#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
ṇṇ
    }
}
void display(vector<int>v){
    for (int i=0;i<v.size();i++)
        std::cout<<" "<<v[i];
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    reverse(v);
    display(v);
    return 0;
}