// learning more stl functions 
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(1);
    d.push_front(2);
    // for (int i:d){
    //     cout<<i<<" ";
    // }
    // d.pop_back();
    for (int i:d)
    cout<<i<<" ";

    cout<<"\n element at index 0 "<<d.at(0);
    return 0;
}