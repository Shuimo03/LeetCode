#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r= 0, sum = 0;
        int ans = INT_MAX;
        if(nums.size() == 0){
            return 0;
        }
        while(r < nums.size()){
            sum += nums[r];
            while(sum >= target){
                ans = min(ans,r-l+1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        return ans == INT_MAX ? 0: ans;
    }
};