// merging two sorted arrays
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v1,int n, vector<int>&v2,int m,vector<int>&v3)
{
    int i=0;
    int j=0;
    for(int i=0;i<n;i++){
        v3.push_back(v1[i]);
    }
    for(int i=0;i<n;i++)
    v3.push_back(v2[i]);

    sort(v3.begin(),v3.end());
    for(int i:v3)
    cout<<" "<<i;
    
}
int main()
{
    vector <int> v1;
    vector<int> v2;
    vector<int>v3;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(5);
    v2.push_back(7);
    v2.push_back(9);

    merge(v1,v1.size(),v2,v2.size(),v3);

    return 0;
}