// Leetcode : Q: Fruits into basket

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int max_fruits(vector<int>&nums){
    int left = 0;
    int max_len = 0;

    unordered_map<int,int>m;

    for(int right = 0;right <nums.size();right++){
        m[nums[right]]++;

        while(m.size() >2){ // It means we have more than 2 fruits in the basket.....
            m[nums[left]]--; // Then we will remove the leftmost fruits from the basket....
            if(m[nums[left]] == 0){
                m.erase(nums[left]);
            }
            left++;
        }
        max_len = max(max_len,right - left+1);
    }
    return max_len;
}
int main()
{
    vector<int>nums = {0,1,2,2};
    return 0;
}