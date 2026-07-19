// Leetcode q: 167 : Two sum II

#include<iostream>
#include<vector>
using namespace std;
vector<int> two_sum(vector<int>&nums,int target){
    int st = 0;
    int end = nums.size() - 1;

    while(st < end){
        int sum = nums[st] + nums[end];
        if(sum == target){
            return {st+1,end+1};
        }else if(sum < target){
            st++;
        }else{
            end--;
        }
    }
    return {};
}
int main()
{
    vector<int>nums = {2,7,11,15};
    int target = 9;
    vector<int>ans = two_sum(nums,target);
    for(int x:ans){
        cout<<x<<" ";
    }
        cout<<endl;

    return 0;
}