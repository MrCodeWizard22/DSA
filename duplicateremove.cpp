// removing duplicate element from a vector
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int k = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size();)
        {
            if (nums[i] == nums[j])
            {

                k--;
                nums.erase(nums.begin() + j);
                
            }
            else
            break;
        }
       
    }
     for(int i:nums)
       std:: cout<<"  "<<i;

       std:: cout<<endl;
    return k;
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    //    nums.push_back();
    //     nums.push_back();
    //      nums.push_back();
    //       nums.push_back();
    //        nums.push_back();
    int k=removeDuplicates(nums);
    cout<<k;

}