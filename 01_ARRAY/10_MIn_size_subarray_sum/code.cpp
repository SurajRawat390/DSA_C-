// Leetcode : q : 209 : Minimum size subarray sum 

#include<iostream>
#include<vector>
using namespace std;
int min_subarray_len(vector<int>&nums,int target){
    int left = 0;
    int right = 0;
    int c_sum = 0;
    int min_len = INT_MAX;

    while(right < nums.size()){
        c_sum += nums[right];
        right++;

        while(c_sum >= target){
            min_len = min(min_len,right - left);
            c_sum -= nums[left];
            left++;
       
        
    }
    return min_len == INT_MAX ? 0:min_len;
}}
int main()
{
    vector<int>nums = {2,3,1,2,4,3};
    cout<<min_subarray_len(nums,7);
    return 0;
}