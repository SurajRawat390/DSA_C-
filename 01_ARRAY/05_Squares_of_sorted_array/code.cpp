// Leetcode : q: 977 : Squares of a sorted array.

#include<iostream>
#include<vector>
using namespace std;
 vector<int>sorted_squares(vector<int>&nums){
    int n= nums.size();
    int i = 0;
    int j = n-1;
    int index = n-1;
    vector<int>ans(n);

    while(i<=j){
        if(abs(nums[i]) > abs(nums[j])){
            ans[index] = nums[i] * nums[i];
            i++;
        }else{
            ans[index] = nums[j] * nums[j];
            j--;
        }
        index--;
    }
    return ans;
}
int main()
{
    vector<int>nums = {-4,-1,0,3,10};
    vector<int>ans =sorted_squares(nums);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}