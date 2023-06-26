#include<bits/stdc++.h>
using namespace std;
void sort(vector<int>v){
     for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]>v[j]){
                    swap(v[i],v[j]);
                }
            }
            
        }
        for(int i:v)
        cout<<i<<endl;
}
int main(){
    vector<int>v={2,0,2,1,1,0};
    sort(v);
    return 0;
}