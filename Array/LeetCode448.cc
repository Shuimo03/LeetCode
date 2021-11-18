#include<iostream>
#include<vector>
using namespace std;

class Solution{
    vector<int> findDisappearedNumbers(vector<int>& nums) {
            vector<int>ans;
            for(const int &num : nums){
                int pos = abs(num)-1;
                if(nums[pos] > 0){
                    nums[pos] = -nums[pos]; // 取反,正数变负数
                    cout << "nums[pos]" << nums[pos] << endl;
                }
            }

            for(int i = 0; i < nums.size(); i++){
                if(nums[i] > 0){
                    ans.push_back(i+1);
                }
            }
            return ans;
    }
}