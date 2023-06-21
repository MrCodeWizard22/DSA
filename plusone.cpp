//plus one to last digit of a number and returning the new value of number
//number is in form of an array
#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        int s=0;
         int e=digits.size()-1;
        while(s<=e){
            digits[e]=digits[e]+1;
            if(digits[e]>9){
                digits[e]=0;
                digits[e-1]=digits[e-1]+1;
                e--;
            }
            else if(s==0 && e==0 && digits[s]>9){
            digits[s]=0;
            digits.insert(digits.begin(),1);
            s++;
            }
            else 
            break;

        }
        return digits;
    }
int main(){
    vector<int>digits;
    vector<int>a;
    digits.push_back(9);
    a=plusOne(digits);
    for(int i:a)
    cout<<" "<<i;
    return 0;
}