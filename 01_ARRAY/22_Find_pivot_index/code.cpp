#include<vector>
#include<iostream>

using namespace std;
int pivot_index(vector<int>&nums){
    int left_sum = 0;
    int right_sum = 0;

    for(int x:nums){
        right_sum += x;  // Total sum of the nums...
    }

    for(int i = 0;i<nums.size();i++){
        right_sum -= nums[i];

        if(right_sum == left_sum){
            return i;
        }
        left_sum += nums[i];
    }
    return -1;
}
int main()
{
    vector<int>nums= {1,7,3,6,5,6};
    cout<<pivot_index(nums);
    return 0;
}