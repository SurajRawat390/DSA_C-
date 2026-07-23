// Leetcode : q: 75 : Sort colors

#include<iostream>
#include<vector>
using namespace std;
void sort_colors(vector<int>&nums){
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    if(nums.size() == 0){
        return;
    }

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++;mid++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main()
{
    vector<int>nums = {2,0,2,1,1,0};
    sort_colors(nums);
    for(int x:nums){
        cout<<x<<" ";
    }
    return 0;
}