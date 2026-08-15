#include<iostream>
#include<vector>
using namespace std;
vector<int>running_sum(vector<int>&nums){
   
    for(int i = 1;i<nums.size();i++){
        nums[i] += nums[i-1];
    }
    return nums;
}
int main()
{
    vector<int>nums ={1,2,3,4};
// vector<int>nums ={1,3,6,10};
    vector<int>ans = running_sum(nums);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}