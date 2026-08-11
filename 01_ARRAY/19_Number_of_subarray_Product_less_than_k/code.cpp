#include<iostream>
#include<vector>
using namespace std;
int no_of_subarray(vector<int>&nums,int k){
    int left = 0;
    int pro = 1;
    int count = 0;

    for(int right  = 0;right<nums.size();right++){
        pro*= nums[right];
        while(pro >= k){
            pro /= nums[left];
            left++;
        }
        count += right - left +1;
    }
    return count;
}
int main()
{
    vector<int>nums = {10,5,2,6};
    int ans = no_of_subarray(nums,100);
    cout<<ans;
    return 0;
}