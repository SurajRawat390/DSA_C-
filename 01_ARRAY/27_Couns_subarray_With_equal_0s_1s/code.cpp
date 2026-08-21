#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int max_len(vector<int>&nums){
    int n = nums.size();

    // Assign all the zeros as -1.
    for(int i = 0;i<n;i++){
        if(nums[i] == 0){
            nums[i] = -1;
        }
    }

    unordered_map<int,int>m;
    m[0] = -1;   // sum is 0 at index -1.
    int sum = 0;
    int m_len = 0;

    for(int i = 0;i<n;i++){
        sum += nums[i];
        if(m.find(sum) != m.end()){
            m_len = max(m_len,i-m[sum]);
        }else{
            m[sum] = i;
        }
    }
return m_len;
}
int main()
{
    vector<int>nums = {0,1,1,1,1,1,0,0,0};
    cout<<max_len(nums);
    return 0;

}