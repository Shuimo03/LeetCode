#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = -1;
        int l = 0, r = 1;
        while( r < nums.size()){
            if(nums[l] < nums[r]){
                res = max(nums[r]-nums[l],res);
            }else if(nums[l] > nums[r]){
                continue;
            }
            r++;
        }
        return res;
    }
};