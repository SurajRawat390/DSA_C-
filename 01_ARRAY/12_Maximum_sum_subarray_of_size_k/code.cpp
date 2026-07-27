// Leetcode : q: 643 : Maximum sum subarray of size k

#include<iostream>
#include<vector>
using namespace std;

double find_max_avg(vector<int>&nums, int k){
    int c_sum = 0;

    for(int i = 0;i<k;i++){
        c_sum += nums[i];
    }

    int max_sum = c_sum;

    for(int i = k;i<nums.size();i++){
        c_sum = c_sum - nums[i-k] + nums[i];
        max_sum = max(max_sum,c_sum);
    }
    return (double)max_sum/k;
}
int main()
{
    vector<int>nums = {1,12,-5,-6,50,3};
double  ans = find_max_avg(nums,4);
    cout<<ans;
    return 0;
}