// Leetcode q: 01 : Two sum problem.


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> two_sum(vector<int>&nums,int target){
    unordered_map<int,int>m;

    for(int i = 0;i<nums.size();i++){
        int x = nums[i];
        int y = target - x;

        if(m.find(y) != m.end() ){
            return {m[y],i};
        }
        m[x] = i;
    }
    return {};
}
int main()
{
    vector<int>nums = {2,7,11,15};
    int target = 9;
    vector<int>ans = two_sum(nums,target);
    for(int x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}