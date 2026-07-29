// Leetcode: Q: 1493 : Longest subarray with ones after replacement..


#include<iostream>
#include<vector>
using namespace std;
int longest_subarray(vector<int>&nums){
    int left = 0;
    int zero_count = 0;
    int max_len = 0;

    for(int right = 0;right<nums.size();right++){
        if(nums[right] == 0){
            zero_count++;
        }
        while(zero_count > 1){
            if(nums[left] == 0){
                zero_count--;

            }
            left++;
        }
        max_len = max(max_len,right - left);
    }
    return max_len;
}
int main()
{
    vector<int>nums = {1,1,0,1};
    int ans = longest_subarray(nums);
    cout<<ans;
    return 0;
}