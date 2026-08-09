#include<iostream>
#include<vector>
using namespace std;
int max_ones(vector<int>&nums,int k){
    int left = 0;
    int max_one = 0;
    int zeros = 0;

    for(int right = 0;right<nums.size();right++){
        if(nums[right] == 0){
            zeros++;
        }
        while(zeros > k){
            if(nums[left] == 0){
                zeros--;
            }
            left++;
        }
        max_one = max(max_one,right-left+1);
    }
    return max_one;
}
int main()
{
    vector<int>nums = {1,1,1,0,0,0,1,1,1,1,0};
    int ans = max_ones(nums,2);
    cout<<ans;
    return 0;
}