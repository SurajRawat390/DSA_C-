#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool check_subarray(vector<int>&nums,int k){
    int n = nums.size();
    unordered_map<int,int>m;
    m[0] = -1;
    int prefix_sum = 0;

    for(int i = 0;i<n;i++){
        prefix_sum += nums[i];

        int rem = prefix_sum % k;

        if(m.find(rem) != m.end()){
            if(i-m[rem] >=2){
                return true;
            }
        }else{
            m[rem] = i;
        }
    }
    return false;
}
int main()
{
    vector<int>nums = {23,2,4,6,7};
    cout<<check_subarray(nums,6);
    return 0;
}