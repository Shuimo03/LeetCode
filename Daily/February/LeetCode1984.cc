#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size() == 1){
            return nums[0]-nums[0];
        }
        sort(nums.begin(),nums.end());
        int ans = INT_MAX;
        //滑动窗口
        for(int i = 0; i+k-1 < nums.size(); i++){
            ans = min(ans,nums[i+k-1]-nums[i]);
        }
        return ans;
    }
};