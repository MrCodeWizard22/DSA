#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v1,int n,vector <int>&v2,int m,vector <int>&ans){
    int i=0;
    int j=0;
    while(ans.size()<(m+n)){
        if (v1[i]<v2[j]){
            ans.push_back(v1[i]);
            i++;

        }
        else{
            ans.push_back(v2[j]);
            j++;
        }
    }
    for (int i:ans)
    cout<<" "<<i;
}
int main()
{
    vector <int> v1;
    vector <int> v2;
    vector <int> ans;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(8);
    
    merge(v1,v1.size(),v2,v2.size(),ans);
    return 0;
}