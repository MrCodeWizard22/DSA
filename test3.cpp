#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3]={1,3,2};
    // cout<<arr;
    int *ptr=arr;
    // cout<<*(ptr+2);

    // for (int i = 0; i < 3; i++) { 
    //     cout << *(arr + i) << " "; 
    // } 

    vector<int>v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(49);
    v.push_back(18);
    v.push_back(45);

    // reverse(v.begin(),v.end());
    // cout<<v.size();
    // cout<<v.capacity();
    cout<<v.empty();
    return 0;
}