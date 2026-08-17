#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subarray_sum_k(vector<int>&nums,int k){
    int count = 0;
    int n = nums.size();
    vector<int>prefix_sum(n,0);

    prefix_sum[0] = nums[0];

    for(int i = 1;i<n;i++){
        prefix_sum[i] += prefix_sum[i-1] + nums[i];
    }

    unordered_map<int,int>m;

    for(int j = 0;j<n;j++){
        if(prefix_sum[j] == k){
            count++;
        }
        int val = prefix_sum[j] - k;

        if(m.find(val) != m.end()){
            count+= m[val];
        }
        m[prefix_sum[j]]++;
    }
    return count;

}

int main(){

    vector<int>nums = {1,2,3};
    cout<<subarray_sum_k(nums,3);
    return 0;
}
