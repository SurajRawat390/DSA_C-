// Leetcode : q : 26 : Remove duplicate from the sorted array.

#include<iostream>
#include<vector>
using namespace std;
int remove_duplicate(vector<int>&nums){
    if(nums.size() == 0){
        return 0;
    }
    int insert_index = 1;
    for(int i = 1;i<nums.size();i++){
        if(nums[i] != nums[i-1]){
            nums[insert_index] = nums[i];
            insert_index++;
        }
    }
    return insert_index;
}
int main()
{
    vector<int>nums = {1,1,2};
    // cout<<remove_duplicate(nums);
    int ans = remove_duplicate(nums);
    cout<<ans;
    return 0;
}