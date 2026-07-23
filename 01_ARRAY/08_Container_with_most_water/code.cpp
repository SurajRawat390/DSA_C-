// Leetcode : q : 11 : Container with most water.

#include<iostream>
#include<vector>
using namespace std;
int max_area(vector<int>&nums){
    int n = nums.size();

    int st = 0;
    int end = n-1;

    int max_area = 0;

    while(st < end){
        int length = end - st;
        int height = min(nums[st],nums[end]);

        int area = height * length;

        max_area = max(max_area,area);

        if(nums[st] < nums[end]){
            st++;
        }else{
            end--;
        }

    }
    return max_area;
}
int main()
{
    vector<int>nums = {1,8,6,2,5,4,8,3,7};
    cout<<max_area(nums);

    return 0;
}