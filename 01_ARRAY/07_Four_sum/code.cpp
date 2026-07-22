// Leetcode : q: 18 : Four sum problem.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>four_sum(vector<int>&nums,int target){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;

    for(int i = 0;i<n-3;i++){
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        for(int j = i+1;j<n-2;j++){
            if(j > i+1 && nums[j] == nums[j-1]){
                continue;
            }

            int st = j+1;
            int end= n-1;
            while(st < end){
                // We use long long to prevent the overflow of integers .
                // supposer we have big numbers as input to handle them we use long long so that it can convert the int into long long data type.
                
                long long sum = 1LL* nums[i] + nums[j] + nums[st] + nums[end];

                if(sum == target){
                    ans.push_back({nums[i],nums[j],nums[st],nums[end]});
                    st++;
                    end--;

                    while(st < end && nums[st] == nums[st -1]){
                        st++;
                    }
                    while(st < end && nums[end] == nums[end+1]){
                        end--;
                    }
                }else if(sum < target){
                    st++;
                }else{
                    end--;
                }
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>nums = {1,0,-1,0,-2,2};
    vector<vector<int>>ans = four_sum(nums,0);
    for(auto four:ans){
        for(int x:four){
            cout<<x<<" " ;
        }
            cout<<endl;
    }
    return 0 ;

}