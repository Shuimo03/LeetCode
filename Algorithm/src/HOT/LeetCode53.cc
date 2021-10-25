#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxNum = nums[0], sum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            sum = max(nums[i],sum+nums[i]);
            if(sum > maxNum){
                maxNum = sum;
            }
        }
        return maxNum;
    }
};