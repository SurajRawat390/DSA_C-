#include<iostream>
#include<vector>
using namespace std;
class Num_array{
    public:

    vector<int>prefix;

    Num_array(vector<int>&nums){

        prefix.resize(nums.size());

        int n= nums.size();
        prefix[0] = nums[0];
        for(int i = 1;i<n;i++){
            prefix[i]  = prefix[i-1] + nums[i];
        }

    }
// Method....
    int sum_range(int left,int right){
       if(left == 0)return prefix[right];

       return prefix[right] - prefix [left-1];
    }
};
int main()
{
    vector<int>nums = {2,3,5,2,-5,1,4};

    // Create object
    Num_array obj(nums);

    // Range sum queries
    cout << "Sum from index 1 to 3: "
         << obj.sum_range(1, 3) << endl;

    cout << "Sum from index 0 to 4: "
         << obj.sum_range(0, 4) << endl;

    cout << "Sum from index 2 to 6: "
         << obj.sum_range(2, 6) << endl;
    return 0;
}