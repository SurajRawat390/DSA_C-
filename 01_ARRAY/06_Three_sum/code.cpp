// leetcode : q : 15 : Three sum problem

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<vector<int>>three_sum(vector<int>&nums,int target){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;

    for(int i = 0;i<n-2;i++){

        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        int st = i+1;
        int end = n-1;
        while(st < end){
            int sum = nums[i] + nums[st] + nums[end];

            if(sum == target){
                ans.push_back({nums[i],nums[st],nums[end]});
                st++;end--;

                while(st < end && nums[st] == nums[st-1]){
                    st++;
                }
                while(st < end && nums[end] == nums[end+1]){
                    end--;
                }

            }else if(sum < 0){
                st++;
            }else{end--;}
        }
    }
    return ans;
}
int main()
{
    vector<int>nums = {-1,0,1,2,-1,-4};
    int target = 0;
    vector<vector<int>>ans = three_sum(nums,target);
    for(auto trip : ans){
        for(int x:trip){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}